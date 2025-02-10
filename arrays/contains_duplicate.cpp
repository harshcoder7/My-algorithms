#include <bits/stdc++.h>
using namespace std;
#include <iostream>

bool dublicates(vector<int> &ans)
{
    int n = ans.size();
    unordered_set<int> checker(n);

    for (int i = 0; i < n; i++)
    {
        if (checker.find(ans[i]) != checker.end())
        {
            return true;
        }
        checker.insert(ans[i]);
    }
    return false;
}

int main()
{
    // Input: nums = [1,1,1,3,3,4,3,2,4,2]

    vector<int> harsh = {1, 2, 3};
    cout << dublicates(harsh);
}