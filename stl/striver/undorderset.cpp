/* What is an unordered set?
An unordered set in STL is a container that stores unique elements in no particular order. Every operation on an unordered set takes O(1) complexity
 in the average case and takes O(n) in the worst case. */

//  Syntax:
// unordered_set<object_type> variable_name;

/* insert() –
to insert an element in the unordered set.
unordered_set<int> s;
s.insert(1);
s.insert(2);
 */

/* begin()
end()
count()
clear()
delete()
find()
size()
empty()
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int> s;
    for (int i = 1; i <= 10; i++)
    {
        s.insert(i);
    }

    cout << "elements present in the set are-->" << endl;
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " " << endl;
    }

    int n = 2;
    if (s.find(1) != s.end())
    {
        cout << n << "its present in our unordereed set" << endl;
    }
    cout << "the size of our unordered is " << s.size() << endl;
}