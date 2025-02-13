#include <bits/stdc++.h>
using namespace std;

vector<int> funct(vector<int> &nums, int target)
{
    // I am thinking of a unordered map approach will store the compliment in my map and and keep storing all the elements in my map

    unordered_map<int, int> mpp;
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
    vector<int> harsh = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = funct(harsh, target);
    for (int index : result)
    {
        cout << index << " ";
    }
    cout << endl;
}