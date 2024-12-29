#include <iostream>
using namespace std;
#include "node.cpp"

// pehle jo sikhe n1.next=&n2,,,n2.next=&n3 this is not the idea way to fill the inputs
node *takeinput()
{
    // better approach of taking input would be
    int data;
    cin >> data;
    node *head = nullptr;
    node *tail = nullptr;
    while (data != -1)
    {
        node *newnode = new node(data);
        if (head == nullptr)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {

            tail->next = newnode;
            tail = tail->next;
        }
        cin >> data;
    }
    return head;
}
void printithnode(node *head, int i)
{
    int j = 0;
    node *temp = head;
    while (temp != nullptr)
    {
        if (j == i)
        {
            cout << temp->data << endl;
        }
        temp = temp->next;
        j++;
    }
}

int length(node *head)
{
    int len = 0;
    node *temp = head;
    while (temp != nullptr)
    {
        len++;
        temp = temp->next;
    }
    return len;
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
    node *head = takeinput(); // here we are returning value of head soo fucntion call mai bhi head ka pointer banake store karenge takeinput ko
    print(head);
    // cout<<endl<<"bhossdk bete aapka lenght hai->"<<length(head)<<endl;
    int i;
    cin >> i;
    printithnode(head, i);
}