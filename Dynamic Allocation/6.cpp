//constant variables
/* #include<iostream>
using namespace std;
void g(int const &a)
{
    a++;
}
int main()
{
    int j=2;
    g(j);

} */

#include<iostream>
using namespace std;
int main()
{
    int j=12;
    int const *p=&j;
    cout<<*p<<endl;
    j++;
    cout<<*p<<endl;
    (*p++); // this is wrong cant be done
    cout<<*p;
    
}