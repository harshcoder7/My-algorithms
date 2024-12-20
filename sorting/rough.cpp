#include <iostream>
using namespace std;

void mergesort(int a[], int l, int mid, int h)
{

    int i = l;
    int j = mid + 1;
    int k = l;
    int b[100];

    while (i <= mid && j <= h)
    {
        if (a[i] < a[j])
        {
            b[k++] = a[i++];
        }
        else
        {
            b[k++] = a[j++];
        }
    }

    for (; i <= mid; i++)
    {
        b[k++] = a[i];
    }
    for (; j <= h; j++)
    {
        b[k++] = a[j];
    }
    for (int i = l; i <= h; i++)
    {
        a[i] = b[i];
    }
}

void merge(int a[], int l, int h)
{
    int mid;
    if (l < h)
    {
        mid = (l + h) / 2;
        merge(a, l, mid);
        merge(a, mid + 1, h);
        mergesort(a, l, mid, h);
    }
}
void ms(int input[], int size)
{
    int l = 0;
    int h = size - 1;
    merge(input, l, h);
}
int main()
{
    int length;
    cin >> length;
    int *input = new int[length];
    for (int i = 0; i < length; i++)
        cin >> input[i];
    ms(input, length);
    for (int i = 0; i < length; i++)
    {
        cout << input[i] << " ";
    }
}