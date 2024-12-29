// here instead of using while loop jiske wajah sai hamara time complexity
// n-1 horha tha well use tail to remove this

#include <iostream>
using namespace std;
#include "node.cpp"

// pehle jo sikhe n1.next=&n2,,,n2.next=&n3 this is not the idea way to fill the inputs
node *takeinput_better()
{
    int data;
    cin >> data;
    node *head = nullptr;
    node *tail = nullptr;
    while (data != -1) //-1 is terminating condition
    {
        node *newnode = new node(data);
        if (head == nullptr)
        {
            head = newnode;
            tail = newnode;
            // edhar apna head ka value null sai update hoke 100 hojayega
        }
        else
        {
            tail->next = newnode;
            tail = tail->next; // update krrhe hai
            // or tail=newnode;
        }

        cin >> data;
    }
    return head;
}

void print(node *head)
{
    // here we use temp because not to loose the original address of head
    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    node *head = takeinput_better(); // here we are returning value of head soo fucntion call mai bhi head ka pointer banake store karenge takeinput ko
    print(head);
}
