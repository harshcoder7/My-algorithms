// sum of array using recursion
#include<iostream>
using namespace std;
int sum(int arr[],int n)
{
    if(n==0)
    {
        return 0;
    }
    int ans=0;
    ans=sum(arr,n-1)+arr[n-1];
    return ans;
}
int main()
{
    int arr[]={1,2,3,4};
    cout<<sum(arr,4);
}
