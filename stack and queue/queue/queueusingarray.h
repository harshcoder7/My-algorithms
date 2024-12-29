template <typename t>
class queueusingarray
{
    t *data;
    int nextindex;
    int firstindex;
    int size;
    int capacity; // size funtion current size batayega but we need totasl size so well maintain this too

public:
    queueusingarray(int s)
    {
        data = new t[s];
        nextindex = 0;
        firstindex = -1;
        size = 0;
        capacity = s;
    }

    int getsize()
    {
        return size;
    }

    bool isempty()
    {
        return size == 0;
    }

    // to insert element

    void enqueue(t element)
    {

        // exapmple lele ni=4  ab 5 pe insert karna hai soo 4 ko 0 pe point karna hoga
        // iska formula hoga   ni=(ni+1)%5    If ni is the current index and capacity is the total size of the queue,
        // When ni reaches capacity - 1 (the last position in the array),
        // ni + 1 would be equal to capacity,
        // Taking modulo capacity ((capacity) % capacity) results in 0, which is the first position of the array.

        if (size == capacity)
        {
            t *newdata = new t[capacity];
            int j = 0;
            for (int i = firstindex; i < capacity; i++)
            {
                newdata[j] = data[i];
                j++;
            }
            int i;
            for (newdata[i] = 0; i < firstindex; i++)
            {
                newdata[j] = data[i];
                j++;
            }
            delete[] data;
            data = newdata;
            firstindex = 0;
            nextindex = capacity;
            capacity *= 2;
            // copy mai hai explanation check mc

            /* cout << "queue full" << endl;
            return; */
        }
        data[nextindex] = element;
        nextindex = (nextindex + 1) % capacity;
        if (firstindex == -1)
        {
            firstindex = 0;
        }
        size++;
    }

    t front()
    {
        if (isempty())
        {
            cout << "queue empty hai" << endl;
            return 0;
        }
        return data[firstindex];
    }

    t dequeue()
    {
        if (isempty())
        {
            cout << "queue empty hai" << endl;
            return 0;
        }
        t ans = data[firstindex];
        firstindex = (firstindex + 1) % capacity;
        size--;
        if (size == 0)
        {
            firstindex = -1;
            nextindex = 0;
        }
        return ans;
    }
};