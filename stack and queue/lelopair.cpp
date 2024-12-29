#include <iostream>
using namespace std;
#include "pairs.cpp"

int main()
{

    pairs<int, int> p1;
    p1.setx(10);
    p1.sety(20);
    cout << p1.getx() << " " << p1.gety() << endl;

    pairs<double, double> p2;
    p2.setx(100.34);
    p2.sety(34.21);
    cout << p2.getx() << " " << p2.gety() << endl;
}