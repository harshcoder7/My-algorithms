#include <iostream>
using namespace std;
class dynamicarray
{
    int *data;
    int nextindex;
    int capacity;

public:
    dynamicarray()
    {
        data = new int[5];
        nextindex = 0;
        capacity = 5;
    }
    void add(int element)
    {
        if (nextindex == capacity) // edhar agat caapcity met hogaya then we need to double the array
        {
            int *newdata = new int[2 * capacity];

            for (int i = 0; i < capacity; i++)
            {
                newdata[i] = data[i]; // newdata array mai data ka value aajayega aur size bhi 10 hojayega ab
            }
            delete[] data;
            data = newdata;
            capacity *= 2;
        }
        data[nextindex] = element;
        nextindex++;
    }
int get(int i)
{
    if (i < nextindex)
    {
        return data[i];
    }
    else
    {
        return -1;
    }
}
  // for deep copy
  dynamicarray(dynamicarray const &d)
  {
    /* this->data=d.data;
    this->nextindex=d.nextindex;
    this->capacity=d.capacity; */ //this is shallow copy we dont have to do this we havr to do deep copy
     
     //here we are making a new array and copy purana wala array
     this->data=new int[d.capacity];
     for(int i=0;i<nextindex;i++)
     {
        this->data[i]=d.data[i];
     }
     this->nextindex=d.nextindex;
     this->capacity=d.capacity;

  }


void add(int i, int element) // here we want to go to a particular index and place our value
{
    if (i < nextindex)
    {
        data[i] = element;
    }
    else if (i == nextindex)
    {
        add(element);
    }
    else
    {
        return;
    }
}
void print()
{
    for (int i; i < nextindex, i++;)
    {
        cout << data[i] << " ";
    }
    cout << endl;
}
};

int main()
{
    dynamicarray d1;
    d1.add(10);
    d1.add(20);
    d1.add(30);
    d1.add(40);
    d1.add(50);
    d1.add(60);
    d1.print();
}