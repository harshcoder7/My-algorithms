// to get the largest element using recursion
#include<iostream>
using namespace std;
int largest(int arr[],int size)
{
    if(arr[0]>arr[1])
    {
        return arr[0];
    }
    else
    return largest(arr+1,size-1);
}
int main()
{
    int arr[]={1,4444,2,3};
    cout<<largest(arr,4);
}

////behenchooddd i did it in like 1 minutes
