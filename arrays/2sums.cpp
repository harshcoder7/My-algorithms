#include <bits/stdc++.h>
using namespace std;

vector<int> twosum(vector<int> given_num, int target)
{
    // i need to think of logic here before coding
    // 1 2 3 4 5 and target is 7 and it is also given that we can assume the output of the giveninput will be only one

    // i can use a for loop n^2 mai hpjayga
    // i can use a two pointer but that will  be nlogn approach which is not soo good

    // i can use a hashmap in this case
    // To make this Agent, we’re going to use smolagents, a library that provides a framework for developing your agents with ease. as

    unordered_map<int, int> mpp; // here i will store the number as key and value index which will

    // i can insert it int the process of checking the complement thoehg which we can find another number and we can return its index soo lets do that

    for (int i = 0; i < given_num.size(); i++)
    {
        int complement = target - given_num[i];
        if (mpp.find(complement) != mpp.end())
        {
            return {mpp[complement], i};
        }
        mpp[given_num[i]] = i;
    }
    return {};
}

int main()
{
    vector<int> input = {1, 2, 3, 4, 5};
    int target = 9;

    vector<int> result = twosum(input, target);
    cout << result[0] << " " << result[1] << endl;
}