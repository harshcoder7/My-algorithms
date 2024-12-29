// to reverse an array
#include <iostream>
using namespace std;
void array(int arr[], int start, int end)
{
    if (start >= end)
    {

        return;
    }
    int temp;
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    array(arr, start + 1, end - 1);
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

/* Driver function to test above functions */
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};

    // To print original array
    printArray(arr, 6);

    // Function calling
    array(arr, 0, 5);

    cout << "Reversed array is" << endl;

    // To print the Reversed array
    printArray(arr, 6);

    return 0;
}