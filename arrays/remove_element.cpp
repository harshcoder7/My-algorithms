#include <bits/stdc++.h>
using namespace std;

// given== nums ( a vector )
// and given val which i need to remove
// i need to do it inplace
// RETURN K

// first i wil store it in my new array and push it back in my original one and return the size

// or i can simply do it inplace using a new index and checking for the val i will start pushing the integer from that index

// int j = 0;
// for (int i = 0; i < nums.size(); i++)
// {
//     if (nums[i] != val)
//     {
//         nums[j] = nums[i];
//         j++;
//     }
// }
// return j;
int remove(vector<int> &nums, int val)
{
    // i can leverage the functionalities of vectors and stl and use remove and erase
    auto harsh = remove(nums.begin(), nums.end(), val);
    nums.erase(harsh, nums.end());
    return nums.size();
}

int main()
{
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;

    cout << remove(nums, val) << endl;
    return 0;
}