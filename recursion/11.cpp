// print first 50 natural numbers
#include<iostream>
using namespace std;
int print(int n)
{
    if(n<=50)
    {
        cout<<n<<endl;
        return print(n+1);
    }

}
int main()
{
    int n=1;
    print(n);
}