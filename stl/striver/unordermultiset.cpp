/* Unordered-multiset in C++ STL
What is an Unordered-multiset?
An unordered_multiset in STL is an associative container just like an unordered set the only difference is it can store duplicate elements in it.

Syntax:
unordered_multiset<object_type> variable_name; */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    unordered_multiset<int> s;
    for (int i = 1; i <= 10; i++)
    {
        s.insert(i);
    }
    s.insert(5);
    cout << "Elements present in the unordered multiset: ";
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    int n = 2;
    if (s.find(2) != s.end())
        cout << n << " is present in unorderd multiset" << endl;

    s.erase(s.begin());
    cout << "Elements after deleting the first element: ";
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    cout << "The size of the unordered multiset is: " << s.size() << endl;

    if (s.empty() == false)
        cout << "The unordered multiset is not empty " << endl;
    else
        cout << "The unordered multiset is empty" << endl;
    s.clear();
    cout << "Size of the unordered multiset after clearing all the elements: " << s.size();
}


//*******************************************************
/* multiset in C++ STL
What is a multiset in C++ STL?
A multiset in STL is an associative container just like a set the only
 difference is it can store duplicate elements in it. */