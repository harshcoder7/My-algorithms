/* Vector in C++ STL
What is a Vector?
Vectors in STL are basically dynamic arrays that have the ability to change size whenever elements
are added or deleted from them. Vector elements can be easily accessed and traversed using iterators.
 A vector stores elements in contiguous memory locations. */

/*  Syntax:
vector<object_type> variable_name; */

// vector<int> v1;
// vector<int> v2;
// vector<int> v3;

// auto iterator=itr;
// itr=v1.begin();

// auto iterator=itr;
// itr=v1.end();

// vector<int> v;
// v.pushback(5);

// //insert

// auto it=v1.begin();
// v1.insert(it,5);

// //erase
// vector<int> v1;
// auto it= v1.begin();
// v1.erase(it);// erasing the first element

// pop back
// it pops back last element in the vector

/*
front() – it returns a reference to the first element of the vector.
v1.front();
back() – it returns a reference to the last element of the vector.
v1.back();
clear() – deletes all the elements from the vector.
v1.clear();
empty() – to check if the vector is empty or not.
v1.empty();
size() – returns the size of the vector
v1.size();
  */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    cout << "elements hai-->" << endl;

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }

    cout << "the first element is" << v.front() << endl;
    cout << "the last element is " << v.back() << endl;
    cout << "the size of the vector is" << v.size() << endl;
    cout << "\nDeleting element from the end: " << v[v.size() - 1];

    v.pop_back();

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }

    /// inserting 5 at the beginning    ye pehle ham auto it=v.begin()  phir v.insert(it,5);
    // ab aise likhte hai
    v.insert(v.begin(), 5);

    cout << "the first element in the vector is" << v[0] << endl;
}
