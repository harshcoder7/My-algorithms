
#include<climits>
// here we are making a class cause all specification of stack will be mentioned here in public

class stackusingarray
{
    int *data;
    int nextindex;
    int capacity; // this data member stack ka size batayega

public:
    /* stackusingarray(int totalsize) // we are making a constructor  //here total size is local variable bahar aate he destroy hojayega
    {
        data = new int[totalsize];
        nextindex = 0; // because our first element should go at index 0
        capacity = totalsize;
    } */

    //dynamically----->
    stackusingarray() // we are making a constructor  //here total size is local variable bahar aate he destroy hojayega
    {
        data = new int[4];
        nextindex = 0; // because our first element should go at index 0
        capacity = 4;
    }

    // well make a size function which will return the number of elments present in stack

    int size()
    {
        return nextindex;
    }

    bool isempty()
    {
        /*   if(nextindex==0)
          {
              return true;
          }
          else{
              return false;
          } */

        // i can also write this instead
        return nextindex == 0;
    }

    // insert element in the stack
    void push(int element)
    {
        if (nextindex == capacity)
        {
            /* cout << "stack is full" << endl;
            return; */

            //dynamically-->
            int *newdata=new int[2 * capacity];
            for(int i=0;i<capacity;i++)
            {
                newdata[i]=data[i];
            }
            capacity *=2;
            delete [] data;
            data=newdata;
        }
        data[nextindex] = element;
        nextindex++;
    }

    //to delete element

    int pop()
    {
        if(isempty())
        {
            cout<<"stack is empty"<<endl;
            return INT8_MIN;
        }
        nextindex--;
        return data[nextindex];
    }

    int top() //here also we need to check is stack is empty or not
    {
         if(isempty())
        {
            cout<<"stack is empty"<<endl;
            return INT8_MIN;
        }
        return data[nextindex - 1];
    }
};