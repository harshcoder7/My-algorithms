 #include<iostream>
 using namespace std;
 int main()
 {
    while(true)
    {
        
        int* i=new int;//we are dynamically allocating the memory 
        delete i;
        cout<<i;

    }

 }