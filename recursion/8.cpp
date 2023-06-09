//sum of digits
#include<iostream>
using namespace std;
int sum(int n)
{
    if(n!=0)
    {
        return n%10+sum(n/10);
    }
    else 
    return 0;

}
int main()
{

    int n=3;
    cout<<sum(n);
}