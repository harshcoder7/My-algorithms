/* What is a set?
A set in STL is a container that stores unique elements in a particular order. Every operation on a set takes
 O(1) complexity in the average case and takes O(n) in the worst case. */

#include <bits/stdc++.h>
using namespace std;
int main()
{

    set<object_type> varname;

    set<int> s;
    s.insert(1);
    s.insert(2);

    s.begin();

    s.end();

    /*  count() – returns true or false based on whether the element is present in the set or not.
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.count(2); //returns true
    clear() – deletes all the elements in the set.
    s.clear();
    find() – to search an element in the set.
    set<int> s;
    s.insert(1);
    s.insert(2);
    if(s.find(2)!=s.end())
    cout<<"true"<<endl;
    erase() – to delete a single element or elements between a particular range.
    s.erase();
    size() – returns the size of the set.
    s.size();
    empty() – to check if the set is empty or not.
    s.empty();
     */
}