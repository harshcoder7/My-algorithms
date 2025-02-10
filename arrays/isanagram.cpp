#include <bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t)
{
    // optimal code
    unordered_map<char, int> mpp;
    // i am trying to make a key freq pair in the first loop i will increment and in the second loop i will decrement and check if my map is empty if yes i can simply return true;

    for (char a : s)
    {
        mpp[a]++;
    }
    for (char b : t)
    {
        mpp[b]--;
    }
    for (auto it : mpp)
    {
        if (it.second != 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s = "anagram";
    string t = "nagaram";
    cout << isAnagram(s, t) << " thanks for asking " << endl;
    return 0;
}