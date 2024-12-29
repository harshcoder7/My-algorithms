// return max element of an array
#include<iostream>
using namespace std;
int getmax(int lol[],int size)
{
    int max=INT8_MIN;
    for(int i=0;i<size;i++)
    {
        if(lol[i]>max)
        {
            max=lol[i];
        }
    }
    return max;
}
void printarray(int arr[],int size)
{
    cout<<"printing the array->"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int size;
    cin>>size;
    int lol[100]; 
    for(int i=0;i<size;i++)
    {
        cin>>lol[i];
    }
    cout<<getmax(lol,size);
    
}