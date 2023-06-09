#include<iostream>
#include<climits>
using namespace std;
  
int maxSubArraySum(int a[], int size)
{
    int start = INT_MIN, end = 0;       
  
    for (int i = 0; i < size; i++)
    {
        end = end + a[i];
        if (start < end)
            start = end;
  
        if (end < 0)
            end = 0;
    }
    return start;
}
  
/*Driver program to test maxSubArraySum*/
int main()
{
    int a[] = {-2, -5, 6, -2, -3, 1, 5, -6};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = maxSubArraySum(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}