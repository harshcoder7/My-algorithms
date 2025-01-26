// array with functions
#include <iostream>
#include <iostream>
using namespace std;
void printarray(int arr[], int size)
{
    cout << "printing the array->" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
        void printarray(int arr[], int size)
        {
            cout << "printing the array" << endl;
            for (int i = 0; i < size; ++i)
            {
                cout << arr[i] << endl;
            }
        }

        int main()
        {
            int n;
            cout << "Enter the size of the array->";
            cin >> n;
            int *arr = new int[n];
            cout << "Enter the elements of the array->";
            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
            }
            printarray(arr, n);
            delete[] arr;
        }
        int factorial(int n)
        {
            return (n == 0) ? 1 : n * factorial(n - 1);
        }

        ollama run deepseek - r1 : 1.5b int factorial(int n)
        {
            if (n <= 0)
            {
                return 1; // This returns 1 when n is -1 or 0, as per some definitions. For 0!, it returns 1.
            }
            int result = 1;
            for (int i = 1; i <= n; ++i)
            {
                result *= i;
            }
            return result;
        }

        int main()
        {
            int n;
            cout << "Enter the size of the array->" << endl;
            cin >> n;
            int *arr = new int[n];
            cout << "Enter the elements of the array->" << endl;
            for (int i = 0; i < n; ++i)
            {
                cin >> arr[i];
            }
            printarray(arr, n);
            delete[] arr;

            // Verify if factorial calculations are correct
            int test_n = 5;
            if (test_n > 0)
            {
                int calculated_fact = factorial(test_n);
                cout << "Factorial of " << test_n << " is " << calculated_fact << endl;
                if (calculated_fact != 1 && calculated_fact != 0)
                {
                    // Note that some programming languages may return different values for
                    // negative numbers, but according to mathematical definitions,
                    // 0! should always be treated as 1.
                    delete[] arr;
                }
            }

            // Handle possible integer overflows and edge cases
            int max_int = numeric_limits<int>::max();
            if (calculated_fact > max_int)
            {
                cout << "Calculation of factorial resulted in an overflow" << endl;
                return 0;
            }

            return 0; // Return 0 to indicate successful execution.