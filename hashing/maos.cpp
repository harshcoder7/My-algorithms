/*
Frequency Counting: The for loop is used to iterate through the array arr, and for each element arr[i], it increments the corresponding entry in the mpp map. The key in the map is the number from the array, and the value is the frequency of that number in the array.

For example, if the input array arr is {1, 2, 2, 3, 3, 3, 4, 4, 4, 4}, the mpp map will look like {1: 1, 2: 2, 3: 3, 4: 4} after this counting process.

Query Processing: In the while loop, you read a number from the input using cin >> number. Then, you use mpp[number] to fetch the frequency of that number from the mpp map.

For example, if you enter 2 as the value of number, the code will check mpp[2]. Since the value associated with the key 2 in the map is 2 (it appears twice in the input array), the code will output 2 as the frequency of the number 2.

This works because in a std::map, the [key] operator allows you to access the value associated with a given key. If the key is not present in the map, it will have a default value (0 in the case of integers).

So, mpp[number] effectively retrieves the frequency of the number entered by the user based on the precomputed counts stored in the mpp map. */

// here map<int int > firs int is key and another one is value
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // precomputer
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    // iterate in the map
    for (auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        // fetch
        cout << mpp[number] << endl;
    }
}