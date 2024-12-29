
#include <bits/stdc++.h>
using namespace std;

//   1       NEED TO PRINT THIS PATTERN N SHOULD BE 5 SO THAT I CAN START FROM 1 TO 4
//   2 6
//   3 8 11
//   4 10 14 18

void print(int n)
{
    // lets do it for the outer row
    for (int i = 1; i <= n; i++)
    {
        int num = i;
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num += i + j - 1;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    print(n);
}