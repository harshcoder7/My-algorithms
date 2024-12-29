// remove x recurively
#include <iostream>
using namespace std;
#include <cstring>

/* void removeX(char input[])
{
    if (input[0] == '\0')

        return;
        removeX(input+1);

        if(input[0]=='x')
        {
            strcpy(input,input+1);
            removeX(input);
        } */

// another method

void removeX(char s[])
{
    if(s[0]=='\0')
    {
        return;
    }
    else if(s[0]!='x')
    {
        removeX(s+1);
    }
    else
    {
        int i=1;
        for(;i!=s['\0'];i++)
        {
            s[i-1]=s[i];
        }
        s[i-1]=s[i];
        removeX(s);
    }
}
int main()
{
    char str[100];
    cin>>str;
    removeX(str);
    cout<<str;

}