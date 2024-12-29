#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    char count='A';
    
    while(i<=n)
    {
        //edhar triangle k form mai banega diagram soo a hogi n tak aur j row tak

        int j=1;
        while(j<=i)
        {
            cout<<count<<" ";
            count=count+1;
            j=j+1;
            
        }
        cout<<endl;
        i=i+1;
    }

}