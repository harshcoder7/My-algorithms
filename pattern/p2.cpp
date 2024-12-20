

// *
// **
// ***


#include<bits/stdc++.h>
using namespace std;

void print(int n){
    for(int j=0;j<4;j++)
    {
        for(int i=0;i<j;i++)
        {
        cout<<"*";
        }
        cout<< endl;
    }
   
}


int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        print(n);
    }
    
    
}