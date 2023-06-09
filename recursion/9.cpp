//count zeros through recurison
#include<iostream>
using namespace std;
int count(int n)
{
    if(n==0)
    {
        return 1;
    }
    if(n<10)
    {
        return 0;
    }
    else if(n%10==0)
    {
        return 1+count(n/10);
    }
    count(n/10);
}
int main() {
    int n;
    cin >> n;
    cout << count(n) << endl;
}
