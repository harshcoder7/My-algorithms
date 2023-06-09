// RETURN SUBSEQUENCE OF A STRING

/* The function returns 2 times the size of the output array from the
recursive call of the smaller input string.
This is because for each substring of the small string, a new substring is created by adding the
first character of the original input string to the front of it. Since the number 
of substrings of a string of length n is 2^n, this doubling of the number of substrings is necessary.
 

return 2 * smallOutputSize;


line 40  41


The for loop iterates through all the substrings
 in the output array from the recursive call of the smaller input string. 
 For each iteration, it creates a new substring by concatenating the first character of the original input string to the current 
 substring in the output array from the recursive call. It assigns this new substring to the 
 corresponding index in the output array, which is the current index plus the size of the output 
 array from the recursive call. This loop is essentially adding the first character of the original 
 input string to all the substrings in the recursive call output array


*/


#include<iostream>
using namespace std;

int subs(string input,string output[])
{
    if(input.empty())
    {
        output[0]="";
        return 1;
    }
    string smallstring=input.substr(1);
    int smalloutputsize=subs(smallstring,output);
    for(int i=0;i<smalloutputsize;i++)
    {
        output[i+smalloutputsize]=input[0]+output[i];
    }
    return 2*smalloutputsize;
}

int main()
{
    string input;
    cin>>input;
    string* output= new string[1000];
    int count=subs(input,output);
    for(int i=0;i<count;i++)
    {
        cout<<output[i]<<endl;

    }

}