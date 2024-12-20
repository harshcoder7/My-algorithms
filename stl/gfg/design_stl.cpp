// in this code we will design a data structure which will design implement this operations in theta(n) time complexity
//:::----insert,delete,search,getrandom
#include <bits/stdc++.h>
using namespace std;

// alright soo well make a class first

class mydata
{
    vector<int> arr;
    unordered_map<int, int> map;

public:
    void add(int x)
    {
        // if our element already exists well just return it
        if (map.find(x) != map.end()) // isko aise samjho agar x arr mai mila toh return kardenge direct insert karne ka zarurat nahi hai
            return;

        // other wise well push it back to the last of the arr
        int index = arr.size();
        arr.push_back(x);
        // updating hashmap
        map.insert(pair<int, int>(x, index));
    }
    // to search to element in the array it return ((((index))))

    // to delete a number in our dataset in 0(1)

    void remove(int x)
    {
        // if element not found then return condition becomes true here
        if (map.find(x) == map.end()) //
            return;
        // now well assign index to element in map
        int index = map.at(x);
        map.erase(index);

        // to reduce the time complexity well swap with the last element in the array
        // then remove element at back
        int last = arr.size() - 1;
        swap(arr[index], arr[last]);
        arr.pop_back();
        // updating hashamp
        // in add what we did is
        // map.insert(pair<int,int>(x,index))
        // but in remove
        map.at(arr[index]) = index;
    }

    int search(int x)
    {
        if (map.find(x) != map.end()) // In the search function, map.find(x) != map.end() is checking whether the element with key x is found in the map. If it is found, the condition is true; otherwise, it's false.
            return map.at(x);
        return -1;
    }
};
int main()
{
    mydata harsh;
    harsh.add(23);
    harsh.add(24);
    harsh.add(26);
    harsh.add(27);
    cout << harsh.search(27);
}