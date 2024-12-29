#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupanagram(vector<string> &strs)
{
    // here i am planning to make a key and sort it and store every element of that key in my hashmap
    unordered_map<string, vector<string>> mpp;

    // map banaliya now i need to find a key to store
    //  "eat","tea","tan","ate","nat","bat"

    for (string s : strs)
    {
        string key = s;
        sort(key.begin(), key.end());
        mpp[key].push_back(s);
    }
    vector<vector<string>> answer;
    for (auto &lol : mpp)
    {
        answer.push_back(lol.second);
    }
    return answer;
}

int main()
{
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> result = groupanagram(strs);
    for (const auto &group : result)
    {
        for (const auto &str : group)
        {
            cout << str << " ";
        }
        cout << endl;
    }
    return 0;
}