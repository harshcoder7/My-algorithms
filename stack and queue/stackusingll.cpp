#include<iostream>
using namespace std;

template <typename t>
class node{
    public:
    t data;
    node<t> *next;

    node(t data)
    {
        this->data=data;
        next=nullptr;
    }
};

template <typename t>
 class stack
 {
    node<t> *head;
    int size;  //number of elements present in stack

    public:

    stack()  //contructor hai iska kaam to initialize data members
    {
        head=nullptr;
        size=0;
    }

    int getsize()
    {
        return size;

    }

    bool isempty()
    {
        return size==0;
    }

    void push(t element)   //this is void so we dont need to return anything
    {
        node<t> *newnode=new node<t>(element);
        newnode->next=head;
        head=newnode;
        size++;
    }

    t pop()
    {
        if(isempty)
        {
            return 0;
        }
        t ans=head->data;
        node<t> *temp=head;
        head=head->next;
        delete temp;
        size--;
        return ans;
    }

    t top()
    {
        if(isempty)
        {
            return 0;
        }
        return head->data;

    }

 };
