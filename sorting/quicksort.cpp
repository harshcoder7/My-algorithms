#include <bits/stdc++.h>
#include <utility>
using namespace std;
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

//********THIS PART IS VERY IMPORTANT********************
int partition(int A[], int l, int h)
{
    int pivot = A[l];
    int i = l, j = h;
    do
    {
        do
        {
            i++;
        } while (A[i] <= pivot);  //finds the elent greeter than pivot
        do
        {
            j--;
        } while (A[j] > pivot); //finc th element smaller than pivot
        if (i < j)
            swap(&A[i], &A[j]);
    } while (i < j);
    swap(&A[l], &A[j]);
    return j;
}
void quickSort(int A[], int l, int h)
{
    int j;
    if (l < h)
    {
        j = partition(A, l, h);
        quickSort(A, l, j);
        quickSort(A, j + 1, h);
    }
}
void quickSort(int input[], int size)
{
    quickSort(input, 0, size - 1);
}
int main()
{
    int n;
    cin >> n;

    int *input = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    quickSort(input, n);
    for (int i = 0; i < n; i++)
    {
        cout << input[i] << " ";
    }

    delete[] input;
}
