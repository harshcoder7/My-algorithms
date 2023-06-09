 // factorial using recursion
 #include<iostream>
 using namespace std;
 int factorial(int n)
 {
    if(n==0){   // BASE CONDITION
    return 1;
    }
 
 int smallinput=factorial(n-1);  //Smaller input k liye assume krenge
 return n*smallinput; // agar smaller input k liye kaam krrha hai then n inputs k liye bhi kaam krega
 }
 int main()
 {
    int n;
    cin>>n;
    int output=factorial(n);
    cout<<output;
 }