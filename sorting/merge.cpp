// merge sorttt
// well split our array in two halves well apply mergesort in first half and second half
// pehle hald aur dusra half sort hogya en dono ko use krke ek naya output array bana rhe hai b usko wapas sai original array mai copy krdenge

#include <iostream>
using namespace std;

void Merge(int A[], int l, int mid, int h) // merging two list in a single array
{
  int i = l, j = mid + 1, k = l;
  int B[100];
  while (i <= mid && j <= h)
  {
    if (A[i] < A[j])
      B[k++] = A[i++];
    else
      B[k++] = A[j++];
  }
  for (; i <= mid; i++)
    B[k++] = A[i];
  for (; j <= h; j++)
    B[k++] = A[j];
  for (i = l; i <= h; i++)
    A[i] = B[i];
}
void MergeSort(int A[], int l, int h)
{
  int mid;
  if (l < h)
  {
    mid = (l + h) / 2;
    MergeSort(A, l, mid);     // edhar pehle half ko sort krdiya
    MergeSort(A, mid + 1, h); // edhar dusre half ko sort krdiya
    Merge(A, l, mid, h);      // to merge this two upper sorted array we need a new array
  }
}
void ms(int input[], int size)
{
  int l = 0;
  int h = size - 1;

  MergeSort(input, l, h);
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

