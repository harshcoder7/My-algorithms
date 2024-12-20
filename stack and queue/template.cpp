#include <iostream>
using namespace std;
template <typename T, typename V>
class MyPair
{
    T x;
    V y;

public:
    void setx(T value)
    {
        x = value;
    }

    void sety(V value)
    {
        y = value;
    }

    T getx() const
    {
        return x;
    }

    V gety() const
    {
        return y;
    }
};

int main()
{
    // MyPair<MyPair<int, int>, int> p2;
    // p2.sety(10);
    // MyPair<int, int> p4;
    // p4.setx(5);
    // p4.sety(16);
    // p2.setx(p4);

    // cout << p2.getx().getx() << " " << p2.getx().gety() << " " << p2.gety() << endl;

    // MyPair<int, double> p1;
    // p1.setx(100.34);
    // p1.sety(100.34);

    // std::cout << p1.getx() << " " << p1.gety() << endl;

    MyPair<int, int> p1;
    p1.setx(10);
    p1.sety(20);
    std::cout << p1.getx() << " " << p1.gety() << std::endl;

    // MyPair<double> p2;
    // p2.setx(100.34);
    // p2.sety(34.21);
    // std::cout << p2.getx() << " " << p2.gety() << std::endl;

    return 0;
}