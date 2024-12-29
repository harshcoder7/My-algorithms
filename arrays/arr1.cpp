//array with functions
#include<iostream>
using namespace std;
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
    int first[3]={0,1,2};
    int second[2]={9,3};
    printarray(first,3);
    printarray(second,2);
}