#include <iostream>
using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int *pa2 = new int[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> pa2[i];
//         cout << "ye rakho number-->" << pa2[i] << endl;
//     }
// }

#define m 4
#define n 5

int main()
{
    int **a = new int *[m];

    for (int i = 0; i < m; i++)
    {
        a[i] = new int[n];
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = rand() % 100;
        }
    }

    // print the 2D array
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << a[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // deallocate memory using the delete operator
    for (int i = 0; i < m; i++)
    {
        delete[] a[i];
    }
    delete[] a;

    return 0;
}