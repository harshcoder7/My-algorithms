#include<iostream>
using namespace std;
int count(int n)
{
    
    int x=0;
    while(n!=0)
    {
        n=n/10;
        x++;        
    }
    return x;
}
int main()
{
    cout<<count(1234)<<endl;

}