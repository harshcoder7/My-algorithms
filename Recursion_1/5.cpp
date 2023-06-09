// to find index of an element in an array

#include <iostream>
using namespace std;
int firstIndex(int input[], int size, int x)
{

    for (int i = 0; i < size; i++)
    {
        if (input[i] == x)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int input[] = {1, 2, 3, 4};
    cout << firstIndex(input, 4, 2);
}
