#include <iostream>
#include <queue>
using namespace std;
// priority queue heap se realted hota hai
int main()
{
    // max heap
    priority_queue<int> maxi; // whenever we initialize like this it is based on max heap0
    // soo whenever well fetch an element from this that element will be greatest among the elements which are inside this

    // min heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    cout<<"size->"<<maxi.size()<<endl;
    int n=maxi.size();
    for(int i=0;i<n;i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;

    mini.push(5);
    mini.push(3);
    mini.push(1);
    mini.push(7);
    cout<<"size->"<<mini.size()<<endl;
    int m=mini.size();
    for(int i=0;i<m;i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;

    cout<<"is it empty???"<<mini.empty()<<endl;

}