#include<iostream>
using namespace std;
bool ispal(int n)
{
    int rev=0;
    int temp=n;
    while(temp!=0)
    {
        int ld=n%10;
        rev=rev*10+ld;
        temp=temp/10;
    }
    return rev==n;
}
int main()
{
    int number=121;
    cout<<(bool)ispal(number);
}