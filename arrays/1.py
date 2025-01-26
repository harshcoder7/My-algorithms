from collections import defaultdict

# Step 1: Initialize the 2D matrix (trigram count structure)
trigram_counts = defaultdict(lambda: defaultdict(int))  # Nested dictionary

# Step 2: Populate the trigram counts from the corpus
def build_trigram_counts(corpus):
    tokens = corpus.split()  # Tokenize the text into words
    for i in range(len(tokens) - 2):  # Iterate over trigrams
        bigram = (tokens[i], tokens[i+1])  # Create the (w_{i-2}, w_{i-1}) tuple
        next_word = tokens[i+2]  # The w_i
        trigram_counts[bigram][next_word] += 1  # Increment count

# Example corpus (extended for larger queries)
corpus = (
    "the cat sat on the mat the cat ate the food the dog barked at the cat "
    "the mat was red and the dog ran away the cat sat quietly on the mat "
    "the food was delicious and the cat ate it"
)
build_trigram_counts(corpus)

# Step 3: Calculate probabilities
def calculate_probabilities(trigram_counts):
    trigram_probabilities = {}
    for bigram, next_words in trigram_counts.items():
        total_count = sum(next_words.values())  # Total occurrences of the bigram
        trigram_probabilities[bigram] = {
            word: count / total_count for word, count in next_words.items()
        }
    return trigram_probabilities

trigram_probabilities = calculate_probabilities(trigram_counts)

# Step 4: Query the trigram probabilities
def get_probability(bigram, next_word):
    if bigram in trigram_probabilities and next_word in trigram_probabilities[bigram]:
        return trigram_probabilities[bigram][next_word]
    return 0.0  # Return 0 probability if not found

# Example query (larger)
bigram_query = ('the', 'cat')
next_word_query = 'sat'
prob = get_probability(bigram_query, next_word_query)

print(f"P('{next_word_query}' | {bigram_query}) = {prob}")

# Another larger query
bigram_query = ('the', 'dog')
next_word_query = 'barked'
prob = get_probability(bigram_query, next_word_query)

print(f"P('{next_word_query}' | {bigram_query}) = {prob}")

# Yet another query
bigram_query = ('the', 'mat')
next_word_query = 'was'
prob = get_probability(bigram_query, next_word_query)

print(f"P('{next_word_query}' | {bigram_query}) = {prob}")

