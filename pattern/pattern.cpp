#include <iostream>
using namespace std;
int main()
{
    //n is rows
    int n;
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        // j is coloumn

        int j = 1;
        while (j<= n)
        {
            cout << i+j-1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}