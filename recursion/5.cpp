//check if x is present or not

#include<iostream>
using namespace std;
bool checkNumber(int input[], int size, int x) {
    if(input[size]==x)
    {
        return x;
    }
    int hello=checkNumber(input,size-1,x);
    return hello;

}
int main()
{
   int n;
   cin>>n;
   int *input=new int[n];
   for(int i=0;i<n;i++)
   {
    cin>>input[i];
   }
    int x;
    cin>>x;
     if(checkNumber(input, n, x)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}


