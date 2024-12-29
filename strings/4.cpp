// in this we will see how to use maps

#include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> mp;

    mp["one"] = 5;
    mp["two"] = 6;
    mp["three"] = 7;
    map<string, int>::iterator it = mp.begin();

    while (it != mp.end())
    {
        cout << " key is" << it->first << endl;

        cout
            << "value is " << it->second << endl;
        it++;
    }
    return 0;
}