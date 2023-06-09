#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string>s;
    s.push("harsh");
    s.push("jha");
    cout<<"top element->"<<s.top()<<endl;
    s.pop();
    cout<<"top element->"<<s.top()<<endl;
    cout<<"my size->"<<s.size();
}