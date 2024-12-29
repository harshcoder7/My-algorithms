//multiply two numbers using recursion
#include<iostream>
using namespace std;
int multiplyNumbers(int m, int n) {
    if(m==0)
    {
        return 0;
    }
    if(m==1)
    {
        return n;
    }
    return n+multiplyNumbers(m-1,n);
}
int main()    
{
    int m=2;
    int n=4;
    cout<<multiplyNumbers(m,n);
}