#include <bits/stdc++.h>
using namespace std;

int secondlargest(vector<int> &arr)
{
    sort(arr.begin(), arr.end());

    int n = arr.size();

    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] != arr[n - 1])
        {
            return arr[i];
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4};
    int ans = secondlargest(arr);
    if (ans != -1)
    {
        cout << "the second largest element is" << ans << endl;
    }
    else
    {
        cout << "it does not exists" << endl;
    }
    return 0;
}

// here i will be addiong somethingsdasda
#include