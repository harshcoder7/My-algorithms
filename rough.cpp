#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        cout << i << " "; // Print the current number

        // For the first row, print all numbers from 2 to n
        if (i == 1) {
            for (int j = 2; j <= n; j++) {
                cout << j << " ";
            }
        } 
        // For subsequent rows, print 5 if not the first row
        else if (i != n) {
            cout << n;
        }

        cout << endl; // Move to the next line
    }

    return 0;
}
