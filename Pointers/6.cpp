//*******DOUBLE POINTER******************

#include <iostream>
using namespace std;
int main()
{
    int i = 10;
    int *p = &i;
    int **p2 = &p;
    cout << p2 << endl;
    cout << &p << endl;
    cout << p << endl;   //  adress of i
    cout << *p2 << endl; /// derefrence karke p pe jayega uska adress
    cout << &i << endl;  /// adress of i
    cout << i << endl;
    cout << *p << endl;
    cout << **p2 << endl;
}