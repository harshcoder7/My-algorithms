//Given an array of length N and an integer x, you need to find if x is present in the array or not. Return true or false.
//Do this recursively.

#include<iostream>
using namespace std;
bool checkNumber(int input[], int size, int x) {
    if(size==0)
    {
        return true;
    }
    else{
    if(input[size]==x)
    {
        return true;
    }
    
    else
    {
        checkNumber(input,size-1,x);
    }

    }
}
int main()
{
    int input[]={1,2,3,4};
    cout<<checkNumber(input,4,9);
}