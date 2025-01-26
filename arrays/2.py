import re
from collections import defaultdict, Counter

# Step 1: Preprocessing the text
def preprocess_text(text):
    """
    Preprocess text based on the BeRP guidelines.
    """
    # Remove noise markers like [uh], [er], [noise], etc.
    text = re.sub(r"\[(.*?)\]", "", text)
    
    # Handle verbal repairs (angle brackets <i>)
    text = re.sub(r"<.*?>", "", text)
    
    # Handle fragments (words with dashes at the end or start)
    text = re.sub(r"-", "", text)
    
    # Remove unnecessary whitespace
    text = re.sub(r"\s+", " ", text).strip()
    
    # Convert text to lowercase as per guidelines
    text = text.lower()
    
    return text

# Step 2: Build the n-gram model
class NGramModel:
    def __init__(self, n):
        self.n = n
        self.ngram_counts = defaultdict(Counter)
        self.context_counts = Counter()
    
    def train(self, corpus):
        """
        Train the n-gram model using the preprocessed corpus.
        """
        for line in corpus:
            tokens = ["<s>"] * (self.n - 1) + line.split() + ["</s>"]
            for i in range(len(tokens) - self.n + 1):
                ngram = tuple(tokens[i:i + self.n])
                context = ngram[:-1]
                word = ngram[-1]
                self.ngram_counts[context][word] += 1
                self.context_counts[context] += 1
    
    def predict(self, context, top_k=1):
        """
        Predict the next word(s) given a context.
        """
        context = tuple(context.split()[-(self.n - 1):])  # Ensure context length matches (n-1)
        if context in self.ngram_counts:
            predictions = self.ngram_counts[context].most_common(top_k)
            return [word for word, _ in predictions]
        return ["<unknown>"]  # Return unknown if context not found
    
    def calculate_probability(self, context, word):
        """
        Calculate the probability of a word given a context.
        """
        context = tuple(context.split()[-(self.n - 1):])  # Ensure context length matches (n-1)
        return self.ngram_counts[context][word] / self.context_counts[context] if context in self.context_counts else 0.0

# Step 3: Load the transcript and train the model
def load_transcript(file_path):
    """
    Load the transcript file and preprocess each line.
    """
    with open(file_path, "r") as f:
        lines = f.readlines()
    preprocessed_lines = [preprocess_text(line.split(maxsplit=1)[1]) for line in lines if len(line.split()) > 1]
    return preprocessed_lines

# Main Program
if __name__ == "__main__":
    # Path to the transcript file
    transcript_file = "arrays/transcript.txt"  # Update file path here
    
    # Load and preprocess the corpus
    corpus = load_transcript(transcript_file)
    
    # Train a trigram model
    ngram_model = NGramModel(n=3)
    ngram_model.train(corpus)
    
    # Example predictions
    context = "i want to"
    predictions = ngram_model.predict(context, top_k=3)
    print(f"Predictions for '{context}': {predictions}")
    
    # Example probability calculation
    next_word = "eat"
    probability = ngram_model.calculate_probability(context, next_word)
    print(f"Probability of '{next_word}' given '{context}': {probability}")

