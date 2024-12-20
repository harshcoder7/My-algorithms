// power

#include <iostream>
using namespace std;
int power(int x, int n)
{
    // lets write the base case
    if (n == 0)
    {
        return 1;
    }
    int po = power(x, n - 1); // we are doing this on smaller set on the problem
    // return the recursive call
    return x * po;
}
int main()
{
    int x = 2;
    int n = 3;
    cout << power(x, n);
}