//return first index of an integer

#include<iostream>
using namespace std;
int firstIndex(int input[], int size, int x) {
    for(int i=0;i<size;i++)
    {
        if(input[i]==x)
        {
            return x;
        }
    }
    return -1;

}

int main(){
    int n;
    cin >> n;
    int *input = new int[n];
    for(int i = 0; i < n; i++)
    {
        cin >> input[i];

    }  
    int x;  
    cin >> x;
    cout << firstIndex(input, n, x) << endl;
}
