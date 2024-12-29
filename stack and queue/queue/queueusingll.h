template <typename t>
class node
{
public:
    t data;
    node<t> *next;
    node(t data)
    {
        this->data = data;
        next = nullptr;
    }
};

template <typename t>
class queue
{
    node<t> head;
    node<t> tail;
    int size;
    // every funtion has tc order of 1

    queue()
    {

        head = nullptr;
        tail = nullptr;
        size = 0;
    }

    int getsize()
    {
        return size;
    }

    bool isempty()
    {
        return size == 0;
    }

    void enqueue(t element)
    {
        node<t> *newnode = new node<t>(element);
        if (head == nullptr)
        {
            head = newnode;
            tail = newnode;
        }
        tail->next = new node;
        tail->next = newnode;
        tail = newnode;
        size++;
    }
    t front()
    {
        if (isempty())
        {
            return 0;
        }
        return head->data;
    }
    t dequeue()
    {
        if (isempty())
        {
            return 0;
        }
        t ans = head->data;
        node<t> *temp = head;
        head = head->next;
        delete temp;
        size--;
        return ans;
    }
}