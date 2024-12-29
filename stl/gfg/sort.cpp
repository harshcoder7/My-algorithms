#include<algorithm>
#include<iostream>
using namespace std;
/*  int main()
{
    int arr[]={3,5,1,2,4};
    sort(begin(arr),end(arr));
    for(int i:arr)
    {
        cout<<i<<" ";
    }
    return 0;
} 
*/



void show(int arr[],int arr_size)
{
    for(int i:arr)
    {
        cout<<i<<" "<<endl;
    }
    return 0;
}

int main()
{
    itn a[]={1,2,3,4,5};
    //size of the array
    int asize=sizeof(a)/sizeof(a[0]);
    sort(a,a+asize);


    
} 