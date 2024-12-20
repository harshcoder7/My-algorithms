// Count frequency of each element in the array''''//
// Problem statement: Given an array, we have found the number of occurrences of each element in the array.

// using two loops
/*
#include <bits/stdc++.h>
using namespace std;

void countfre1(int arr[], int n)
{
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++)
    {
        if (visited[i] == true)
            continue;

        // count freq
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                visited[j] = true;
                count++;
            }
        }
        cout << arr[i] << " " << count << endl;
    }
}

int main()
{
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    countfre1(arr, n);
    return 0;
} */

//*********************using maps******************************************

#include <bits/stdc++.h>
using namespace std;

void Frequency(int arr[], int n)
{
    unordered_map<int, int> map;
    for (int i = 0; i <= n; i++)
        map[arr[i]]++;

    for (auto it : map)
        cout << it.first << " " << it.second << endl;
}

int main()
{
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    Frequency(arr, n);
    return 0;
}

/* void Frequency(int arr[], int n)
{
    unordered_map<int, int> map;

    for (int i = 0; i < n; i++)
        map[arr[i]]++;

    // Traverse through map and print frequencies
    for (auto x : map)
        cout << x.first << " " << x.second << endl;
} */