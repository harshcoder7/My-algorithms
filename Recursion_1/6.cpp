// Given an array of length N and an integer x, you need to find and return the last index of integer x present in the array. Return -1 if it is not present in the array.
#include <iostream>
using namespace std;
/* int lastIndex(int input[], int size, int x)  //this will work too
{
    int index = 0;
    for (int i = 0; i < size; i++)
    {

        if (input[i] == x)
        {
            index = i;
            for (int j = i; j < size; j++)
            {
                if (input[j] == x)
                {
                    index = j;
                }
            }
            return index;
        }
    }
} */
int lastIndex(int input[], int size, int x) {
  if(size<0)
  {
    return -1;
  }
  if(input[size]==x)
  {
    return size;
  }
  return lastIndex(input,size-1,x);

}


int main()
{
    int input[] = {1, 2, 3, 4, 2, 4, 5, 6};
    cout << lastIndex(input, 8, 2);
}
