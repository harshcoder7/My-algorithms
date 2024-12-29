#include<iostream>
using namespace std;
#include<deque>
int main()
{
    deque<int>d;
    d.push_back(1);
    d.push_front(2);
    for(int i: d)
    {
        cout<<i<<" ";

    }
    cout<<endl;
   cout<<"element at first index->"<<d.at(0)<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase->"<<d.size()<<endl;






}