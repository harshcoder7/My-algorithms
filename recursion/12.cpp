// to print elements in a array using recursion
#include<iostream>
using namespace std;
void count(int arr[],int size)
{
    static int i;
    if(i==size)
    {
        i=0;
        cout<<endl;
        return;
    }
    cout<<arr[i]<<endl;
    i++;
    count(arr,size);

}
int main()
{
    int arr[]={1,2,3,4};
    count(arr,4);

}
//cool fair enough

// so what did we learn form this
// 