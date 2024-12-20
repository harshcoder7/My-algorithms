#include<iostream>
using namespace std;
#include "node.cpp"


// hol amigo

node *reversal(node *head)
{
    if(head==nullptr || head->next==nullptr)
    {
        return head;
    }

    node *smallans=reversal(head->next);
    node *tail=head->next;
    head->next=nullptr;
    return smallans;
}

node *takeinput_better()
{
    int data;
    cin >> data;
    node *head = nullptr;
    node *tail=nullptr;
    while (data != -1)  //-1 is terminating condition
    {
        node *newnode = new node(data);
        if (head == nullptr)
        {
            
            head = newnode;
            tail=newnode;
             // edhar apna head ka value null sai update hoke 100 hojayega
        }
        else
        {
          tail->next=newnode;
          tail=tail->next; //update krrhe hai
          //or tail=newnode;
        }

        cin >> data;
    }
    return head;
}

void print(node *head)
{
    // here we use temp because not to loose the original address of head
    
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout<<endl;
}

int main()
{
    node *head=takeinput_better();
    head=reversal(head);
    print(head);

}