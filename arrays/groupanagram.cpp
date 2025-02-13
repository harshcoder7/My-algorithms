#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupanagram(vector<string> &strs)
{
    // here i use a unordered  map to store the key value pair
    unordered_map<string, vector<string>> mpp;

    for (const string &s : strs)
    {
        string key = s;
        sort(key.begin(), key.end());
        mpp[key].push_back(s);
    }

    // we are done with the insertion part now i need to store it in my answer string

    vector<vector<string>> ans;
    for (const auto &t : mpp)
    {
        ans.push_back(t.second);
    }
    return ans;
}

int main()
{
    vector<string> given = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> result = groupanagram(given);

    // Properly print the 2D vector
    for (const auto &group : result)
    {
        cout << "[ ";
        for (const auto &word : group)
        {
            cout << word << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}