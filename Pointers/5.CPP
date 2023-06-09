//FUNCTIONNS ARRAYS
#include<iostream>
using namespace std;
int sum(int* a,int size)
{
    int ans=0;
    for(int i=0;i<size;i++)
    {
        ans+=a[i];
    }
    return ans;
}
int main()
{
    int a[3]={1,2,3};
    cout<<sizeof(a)<<endl; //ye array hai so size 40 agar a[] hota toh 8 batata kyuki pointer hota woh
    cout<<sum(a,3)<<endl;
    //cout<<sum(a+3,10)<<endl; edhar +3 krne hai 3 element sai leke 10th element tak ka sum krega
}