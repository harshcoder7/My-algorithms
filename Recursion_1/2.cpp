//fibonacci series using recursion
#include<iostream>
using namespace std;
int fib(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    int smalloutput;
    smalloutput=fib(n-1)+fib(n-2);
    return smalloutput;
}
int main()
{
    int n=3;
    cout<<fib(3);
}