#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=1;
    int i=1;
    while(i<=n)
    {
        int j=1;
        int value=i;
        while(j<=i)
        {
            cout<<i+j-1<<" ";
            value=value+1;
            j=j+1;

        }
        cout<<endl;
        i=i+1;


    }

}