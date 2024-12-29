#include <iostream>
#include <vector>
using namespace std;

int f(int n, vector<int> &dp)
{
    // base case
    if (n <= 1)
    {
        return n;
    }

    // check if the result is already computed
    if (dp[n] != -1) // 2nd step
    {
        return dp[n];
    }

    // compute the result and store it in dp
    dp[n] = f(n - 1, dp) + f(n - 2, dp); // 3rd step
    return dp[n];
}

int main()
{
    int n = 5;
    vector<int> dp(n + 1, -1); // we store it like size value  1st step
    cout << f(n, dp) << endl;
    return 0;
}