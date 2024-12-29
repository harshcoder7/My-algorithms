#include <bits/stdc++.h>
using namespace std;

vector<int> twosum(vector<int> &nums, int target)
{
    // i will solve this question using 2 pointer approach

    int left = 0;
    int right = nums.size() - 1;
    vector<pair<int, int>> stored;
    for (int i = 0; i < nums.size(); i++)
    {
        stored.push_back({nums[i], i});
    }
    sort(stored.begin(), stored.end());

    while (left < right)
    {
        int sum = stored[left].first + stored[right].first;
        if (sum == target)
        {
            return {stored[left].second, stored[right].second};
        }

        if (sum > target)
        {
            right--;
        }
        else
            left++;
    }
    return {};
}

int main()

{
    vector<int> nums = {7, 2, 2, 3, 4};
    int target = 9;
    vector<int> result = twosum(nums, target);

    for (int index : result)
    {
        cout << index << " ";
    }
    cout << endl;
    return 0;
}
