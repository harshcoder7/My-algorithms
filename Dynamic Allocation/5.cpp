//default argument
#include<iostream>
using namespace std;
int sumofarr(int a[],int size,int si=0)//here we are initializing si as 0 soo its a default argument
{
    int ans=0;
    for(int i=si;i<size;i++)
    {
        ans+=a[i];
    }
    return ans;
}
int main()
{
    int a[3]={1,2,3};
    cout<<sumofarr(a,3);

}