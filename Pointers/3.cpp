//arrays and pointers

#include<iostream>
using namespace std;
int main()
{
    int a[10];
    cout<<a<<endl;
    cout<<&a[0]<<endl;
    a[0]=5;
    a[1]=23;
    cout<<*a<<endl;
    cout<<*(a + 1)<<endl;
    
    int *p=&a[0];
    cout<<p<<endl;
    cout<<a<<endl;
     cout<<&p<<endl;
    cout<<&a<<endl;
    cout<<sizeof(p)<<endl; // size of pointer 
    cout<<sizeof(a)<<endl; //size of array
}