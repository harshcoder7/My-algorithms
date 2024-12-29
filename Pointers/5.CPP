// function to sum of array
#include <iostream>
using namespace std;
int sum(int *a, int size)
{
    int ans = 0;
    for (int i = 0; i <= size; i++) // 1,2,3
    {
        int ans = ans + a[i];
    }
    return ans;
}

int main()
{
    int a[3] = {1, 2, 3};
    cout << sizeof(a) << endl;
    sum(a, 3);
}
