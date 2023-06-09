//power

#include<iostream>
using namespace std;
int power(int x,int n)
{
    if(n==0)
    {
        return 1;
    }
    int po=power(x,n-1);
    return  x*po;
}
int main()
{
    int x=2;
    int n=3;
    cout<<power(x,n);

}