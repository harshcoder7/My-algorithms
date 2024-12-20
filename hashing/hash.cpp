// thismethod is not that convient use maps instead
// number hasing

// 10^8 operations takes 1 second
// 10^10 operations takes 100 second kyuki 10^8= 1/10^8 *10^10

#include <bits/stdc++.h>
using namespace std;
int main()
{

    // alright soo what we are doing here is first we are creating array of size 13 and initizing it with random number
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // precomputer //this can be also called as hash array
    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        // fetch
        cout << hash[number] << endl;
    }
    return 0;
}
