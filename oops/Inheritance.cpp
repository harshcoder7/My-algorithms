//  I am learning about multiple inheritance and the diamond problem and how to fix it soo its all gonna be about that onyl *******************

// alright first i will write the code for multiple inheritance and then i will take a diamond problem and fix it using virtaul function which lkets the last base class to inherit from onyl one amoing the two classes
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

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
