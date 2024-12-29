#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            //edhar realtion hoga A+i-1 kyuki i bada hai aur A+1 B ho jarha hai same for abc/abc/abc bas usme a+j-1 hojayega
            char ch='A'+i-1;
            cout<<ch<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}