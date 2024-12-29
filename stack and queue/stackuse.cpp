#include<iostream>
using namespace std;
#include "stackuisngarrayusingtemplate.cpp"

int main()
{
    stackusingarray<char> s;  //iit means satck jo bana hai jaha jaha t likha tha replaced with int
    s.push(101);
    s.push(102);
    s.push(103);
    s.push(104);
    s.push(105) ;

    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl; 
    cout<<s.isempty()<<endl;

}