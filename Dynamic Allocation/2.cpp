
//*******************rough work(piece of  art)**********************

// #include <iostream>
// using namespace std;
// int main()
// {
//     while (true)
//     {
//         int *i = new int[4]; // Allocate memory
//         delete[] i;          // Deallocate memory
//         cout << i << endl;
//         i = nullptr; // Set the pointer to nullptr to avoid dangling pointer
//     }
//     return 0;
// } //isme abhi bhi infinte loop aarha tha lol

//*********************now try this*******************************
// this works pretty well
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int *i_ptr = new int[n]; // Allocate memory for an integer array of size n

//     for (int i = 0; i < n; ++i)
//     {
//         i_ptr[i] = i + 1; // Initialize and print the values from 1 to n
//         cout << i_ptr[i] << endl;
//     }

//     delete[] i_ptr; // Deallocate the memory

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int *har = new int[n];

    cout << "enter your 4 numbers";

    for (int i = 0; i <= n; i++)
    {
        cin >> har[i];
    }

    cout << "terey numberes ye rahe-->>";
    for (int i = 0; i <= n; i++)
    {
        cout << har[i] << endl;
    }

    delete[] har;
    return 0;
}