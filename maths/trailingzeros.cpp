#include<iostream>
using namespace std;
int trailzeroinfact(int n)
{
    int sum=0;
    while(n/5>0)
    {
        sum=sum+(n/5);
        n=n/5;
    }
    return sum;
}
int main()
{
    cout<<trailzeroinfact(30)<<endl;
}



















/* int countzeroes(int n)
{
    int fact=1;
    for(int i=2;i<=n;i++)
    fact=fact*n;

    int res=0;
    while(fact%10==0)
    {
        res++;
        fact=fact/10;
    }
    return res;
}
int main()
{
    cout<<countzeroes(10);

} */ // not efficient because datatype is int and if we give n as 20 it will be a high number soo..


