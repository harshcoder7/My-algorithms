//sum in the array

#include<iostream>
using namespace std;
int sum(int input[], int n) {
    if(n==0)
    {
        return 0;
    }
    int lola=input[n-1]+sum(input,n-1);
    return lola;
}    
int main()
{
    int input[]={1,2,3,4};
    cout<<sum(input,4);
}