#include<iostream>
using namespace std;
#include "node.cpp"

// pehle jo sikhe n1.next=&n2,,,n2.next=&n3 this is not the idea way to fill the inputs

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



 node *insertnode(node *head,int data,int i)
 {
    node *newnode=new node(data);
    int count=0;
    node *temp=head;
    if(i==0)
    {
        node *newnode=head;
        head=newnode;
        return head;
    }
    while(temp!=nullptr && count<i-1)
    {
        temp=temp->next;
        count++;
    }
    if(temp!=nullptr)
    {

    }

 }
















  node *insertnode(node *head,int i,int data)
  {
    node *newnode=new node(data);
    int count=0;
    node *temp=head;


    if(i==0)
    {
        newnode->next=head;
        head=newnode;
        return head;
    }

    while(temp!=nullptr && count<i-1){
        temp=temp->next;
        count++;
    }

    if(temp!=nullptr){
    node *a=temp->next;
    temp->next=newnode;
    newnode->next=a;
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
    node *head=takeinput_better();
    print(head);
    int i,data;
    cin>>i>>data;
    head=insertnode(head,i,data);
    print(head);
}