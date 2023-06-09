#include <iostream>
#include <valarray>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void bubblesort(int a[], int n)
{
    int i;
    int j;
    int flag = 0;
    for (int i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                
                swap(&a[j], &a[j + 1]);
                flag = 1;
            } 
        }
        if(flag==0)
        {
            break;
        }

    }
}

int main()
{
    int a[] = {3, 7, 4, 5, 7, 8, 9};
    int n = 7;
    bubblesort(a, 7);
    for (int i = 0; i < 7; i++)
    {
        cout << a[i];
    }
}