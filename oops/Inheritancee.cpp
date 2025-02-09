//  I am learning about multiple inheritance and the diamond problem and how to fix it soo its all gonna be about that onyl *******************

// alright first i will write the code for multiple inheritance and then i will take a diamond problem and fix it using virtaul function which lkets the last base class to inherit from onyl one amoing the two classes
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// // THIS IS GOING TO BE MY BASE CLASS 1

// class A
// {
// public:
//     void showa()
//     {
//         cout << "harsh ka bacha" << endl;
//     }
// };

// // THIS WILL BE MY BASE CLASS 2

// class B
// {

// public:
//     void showb()
//     {
//         cout << "harsh ka pota" << endl;
//     }
// };

// // now this will be my derived class we will use multiple inheritance

// class C : public A, public B
// {

// public:
//     void showc()
//     {
//         cout << "this is the multiple inheritance wala example" << endl;
//     }
// };

// int main()
// {
//     C obj;
//     obj.showa();
//     obj.showb();
//     obj.showc();
//     return 0;
// }

//**************** This will be the diamond problem wala ************************

// what is diamond problem ??
//  ----> Diamond problem happend when a class inherits from two base class and another class inherits from that class we call it a diamond problem and there is a problem of ambiguity here

// // This is the base class
// class A
// {
// public:
//     void show()
//     {
//         cout << "this is class a" << endl;
//     }
// };

// // Derived Class 1
// class B : virtual public A
// {
// };

// // Derived Class 2
// class C : virtual public A
// {
// };

// // Derived Class 3 (Resolves Diamond Problem)
// class D : public B, public C
// {
// };

// int main()
// {
//     D obj;
//     obj.show(); // ✅ Now, only one copy of A is inherited!

//     return 0;
// }

#include <iostream>
using namespace std;

// Base class
class Superhero
{
public:
    Superhero() { cout << "Superhero Constructor Called\n"; }
    void showIdentity() { cout << "I am a superhero!\n"; }
};

// Derived class 1 (Physical Powers)
class PhysicalPower : virtual public Superhero
{ // Virtual inheritance to avoid diamond problem
public:
    PhysicalPower() { cout << "PhysicalPower Constructor Called\n"; }
    void superStrength() { cout << "I have super strength! 💪\n"; }
};

// Derived class 2 (Mental Powers)
class MentalPower : virtual public Superhero
{ // Virtual inheritance
public:
    MentalPower() { cout << "MentalPower Constructor Called\n"; }
    void telepathy() { cout << "I can read minds! 🧠\n"; }
};

// Derived class 3 (Combining both)
class UltimateHero : public PhysicalPower, public MentalPower
{
public:
    UltimateHero() { cout << "UltimateHero Constructor Called\n"; }
    void fullPower() { cout << "I am the ultimate superhero with both physical and mental powers! 🔥\n"; }
};

int main()
{
    UltimateHero ironMind; // Object creation

    cout << "\nSuperhero Abilities:\n";
    ironMind.superStrength(); // Physical power
    ironMind.telepathy();     // Mental power
    ironMind.fullPower();     // Ultimate power
    ironMind.showIdentity();  // From Superhero class (diamond problem solved via virtual inheritance)

    return 0;
}
