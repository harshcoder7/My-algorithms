/* Now each one of these iterators are not supported by all the containers in STL, different containers support different iterators, like vectors support Random-access iterators, while lists
support bidirectional iterators. The whole list is as give */

#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{

    vector<int> v = {1, 2, 3, 4};

    // declaring an interator

    vector<int>::iterator i;

    // accessing elements using iterator

    for (i = v.begin(); i != v.end(); i++)
    {
        cout << *i << endl
             << "";
    }

    v.push_back(3);
    for (i = v.begin(); i != v.end(); i++)
    {
        cout << *i << endl;
    }
}