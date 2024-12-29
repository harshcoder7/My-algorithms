#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row=1;
    while(row<=n)
    {
        int col=1;
        while(col<=n)
        {
            char ch='A'+row+col-2;// this is the formula a+i+j-2 just like in number
            //here row and column are constantly changing so well formulate a formula for this code
            cout<<ch;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}