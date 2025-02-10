#include <bits/stdc++.h>
using namespace std;

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]

// basically i have to return the indexes here

// i will use two pointer approach now
// vector<pair<int, int>> sortedNums;

// for (int i = 0; i < nums.size(); i++)
// {
//     sortedNums.push_back({nums[i], i}); // we are storing number and its index
// }

// sort(sortedNums.begin(), sortedNums.end());

// int n = nums.size();
// int first = 0;
// int last = n - 1;
// while (first <= last)
// {
//     int sum = sortedNums[first].first + sortedNums[last].first;
//     if (sum == target)

//     {
//         return {sortedNums[first].second, sortedNums[last].second};
//     }
//     else if (sum < target)
//     {
//         first++;
//     }
//     else
//         last--;
// }
// return {};
// }

// int main()
// {
// vector<int> ans = {4, 1, 3, 2};
// int target = 7;

// // we cannot directly print a vector we need a iterator

// vector<int> nums = twoSum(ans, target);
// if (!nums.empty())
// {
//     cout << nums[0] << " " << nums[1] << endl;
// }
// else
// {
//     cout << "no pair found" << endl;
// }
// return 0;

vector<int> twoSum(vector<int> &nums, int target)
{
    // now i will write a more optimal code in this case
    // i can either use a 2 pointer approach either i can use a hashmap  and checkfor the complement and return
    // I SAW THE N^2 APPROACH AND SAW AN BETTER APPROACH USING A TWO POINTER AND NWO I WILL SEE A APPROACH USING A HASHMAP WHICH WILL DO IN  N TC

    // make  an unorderd map

    unordered_map<int, int> mpp;

    // need to store the value and its index in this map

    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];
        if (mpp.find(complement) != mpp.end())
        {
            return {mpp[complement], i};
        }

        mpp[nums[i]] = i;
    }
    return {};
}

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);
    if (!result.empty())
    {
        cout << "[" << result[0] << ", " << result[1] << "]" << endl;
    }
    else
    {
        cout << "No pair found!" << endl;
    }

    return 0;
}