
#include <bits/stdc++.h>
using namespace std;

//   1       NEED TO PRINT THIS PATTERN N SHOULD BE 5 SO THAT I CAN START FROM 1 TO 4
//   2 6
//   3 8 11
//   4 10 14 18

void print(int n)
{
    // lets do it for the outer row
    // outer loop to print the rows
    for (int i = 1; i <= n; i++)
    {
        // variable to keep track of the number to be printed
        int num = i;
        // inner loop to print the columns
        for (int j = 1; j <= i; j++)
        {
            // print the number
            cout << num << " ";
            // calculate the next number to be printed
            // the calculation is: num + i + j - 1
            // this is done to get the next number in the
            // pattern which is on the same row and next column
            num += i + j - 1;
        }
        // print a new line after each row
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    
    // This function takes an integer n as input and returns the nth Fibonacci number.
    // Fibonacci sequence is a series of numbers in which each number is the sum of the two preceding ones, usually starting with 0 and 1.
    // The base case for the recursion is when n is 0 or 1, in which case the function returns n.
    // Otherwise, the function calls itself with n-1 and n-2 as arguments and returns the sum of the two results.
    int fib(int n)
    {
        if (n == 0 || n == 1)
        {
            return n;
        }
        return fib(n - 1) + fib(n - 2);
    }
    // Call the print function to print the pattern
    print(n);
}
// 
// func solve(int a, int b)