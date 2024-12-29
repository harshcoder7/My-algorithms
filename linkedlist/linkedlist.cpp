#include <iostream>
using namespace std;
#include "node.cpp"

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
    // there are two methods to create object of a class statically and dynamically

    // statically->

    // we have to save n1 ka address within a variable(pointer)

    node n1(1);       // ye likhte he n1 naam ka block ban gaya jiske data mai 1 set hogaya aur address mai null hogaya
    node *head = &n1; // n1 ka address save karrhe hai ham using a pointer variable(8 bytes ka) we are not creating a new node
    node n2(2);
    /*  n1.next=&n2;

     //now well print both the nodes with the help of head

     cout<<n1.data<<" "<<n2.data;

     //dynamically

     node *n3=new node(10);
     node *head=n3;
     node *n4=new node(20);
     //check notes samjh aajayega
     n3->next=n4; */

    node n3(3);
    node n4(4);
    node n5(5);
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;

    // here we created 5 nodes and connected them and now we want to print them

    print(head);
}