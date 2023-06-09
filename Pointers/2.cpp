#include<iostream>
using namespace std;
int main()
{
    int i=10;
    int *p=&i;
    cout<<sizeof(p)<<endl;
    int a=*p;
    a++;
    cout<<a<<endl;
    cout<<*p<<endl;
}