// print subsequence of a string

#include<iostream>
using namespace std;
void subs(string input,string output)
{
    if(input.length()==0)
    {
        cout<<output<<endl;
        return;
    }
    subs(input.substr(1),output);
    subs(input.substr(1),output+input[0]);
}
int main()
{
    string input;
    cin>>input;
    string output="";
    subs(input,output);
}