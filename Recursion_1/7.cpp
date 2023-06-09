//sum of digits iterative
/* #include<iostream>
using namespace std;
int main()
{
    int m;
    int sum=0;
    int n;
    cin>>n;
    while(n>0)
    {
        m=n%10;
        sum=sum+m;
        n=n/10;

    }
    cout<<"sum is "<<sum<<endl;
}
 */

//sumo of digits recursive

#include<iostream>
using namespace std;
int sum(int n)
{
    if(n!=0)
    {
        return n%10+sum(n/10);
    }
    else{
        return 0;
    }
}
int main()
{
    int n=123;
    cout<<sum(n);
}