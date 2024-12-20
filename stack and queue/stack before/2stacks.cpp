// lets muther fucking code
// it is actually super fuin
#include <iostream>
#include <stdlib.h>
using namespace std;

class twostack
{
private:
    int *arr;
    int size;
    int top1;
    int top2;

public:
    twostack(int n)
    {
        int size = n;
        arr = new int[size];
        top1 = -1;
        top2 = size;
    }

    void push1(int x)
    {
        if (top1 < top2 - 1)
        {
            top1++;
            arr[top1] = x;
        }
        else
        {
            cout << "stack overflow" << endl;
            exit(1);
        }
    }

    void push2(int x)
    {
        if (top1 < top2 - 1)
        {
            top2--;
            arr[top2] = x;
        }
        else
        {
            cout << "stack overflow" << endl;
            exit(1);
        }
    }

    int pop1() // just think vbefore in popping we dont need to pass an argument soo we can directly write int pop2 (){} and complete this easily
    {
        if (top1 >= 0)
        {
            // we are we are popping out the elements we also need to display them before popping it so
            int x = arr[top1];
            top1--; // for popping we have to remove that element thats why we do top1--
            return x;
        }
        else
        {
            cout << "stack overflow" << endl;
            exit(1);
        }
    }

    int pop2()
    {
        if (top2 < size)
        {
            // we are we are popping out the elements we also need to display them before popping it so
            int x = arr[top2];
            top2++; // Check if top2 < size to ensure stack2 is not empty, then increment top2 to remove the top element.
            return x;
        }
        else
        {
            cout << "stack underflow" << endl;
            exit(1);
        }
    }
};

int main()
{
    twostack ts(5);
    ts.push1(5);
    ts.push2(10);
    ts.push2(15);
    ts.push1(11);
    ts.push2(7);

    cout << "Popped element from stack1 is " << ts.pop1();

    ts.push2(40);

    cout << "\nPopped element from stack2 is " << ts.pop2();

    return 0;
}