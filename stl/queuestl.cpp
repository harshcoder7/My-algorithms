#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<string> q;
    q.push("harsh");
    q.push("jha");
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;


}