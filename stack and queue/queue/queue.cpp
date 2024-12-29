#include<iostream>
using namespace std;
#include "queueusingarray.h"
int main()
{
   queueusingarray<int> q(5);
   q.enqueue(10);
   q.enqueue(20);
   q.enqueue(30);
   q.enqueue(40);
   q.enqueue(50);
   q.enqueue(60);

   cout<<q.front()<<endl;  //isme 10 aayega 
   cout<<q.dequeue()<<endl;// 10
   cout<<q.dequeue()<<endl;//20
   cout<<q.dequeue()<<endl;//30

   cout<<q.getsize()<<endl;//2
   cout<<q.isempty()<<endl;//0
}