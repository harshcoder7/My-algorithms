#include <iostream>
#include <set>
using namespace std;
int main()
{
    // sarey elements unique honey chahye
    // implementation using bst ya toh element delete kare ya toh daley modify nhi krsakte
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(6);
    cout << endl;
    for (auto i : s)
    {
        cout << i << endl;
    }
    cout << endl;

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    for (auto i : s)
    {
        cout << i << endl;
    }
    cout << endl;

    cout << "5 present hai ya nahi" << s.count(5) << endl;
    set<int> :: iterator itr =s.find(5);
    cout<<"value present at itr->"<<*it<<endl;

}