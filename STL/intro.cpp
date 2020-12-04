#include <iostream>
#include <algorithm>
using namespace std;

// main
int main()
{
    int arr[] = {20, 30, 40, 40, 40, 50, 60, 70};
    int n = sizeof(arr) / sizeof(int);

    int key;
    cout<<"Key:";
    cin >> key;
    // binary search

    bool present = binary_search(arr, arr + n, key);
    if (present)
    {
        cout << "Present!" << endl;
    }
    else
    {
        cout << "Absent!" << endl;
    }

    // two more things
    // 1. Get the index of the searched element

    // (a) Lower bound of a number
    // this will give first element <= key
    auto lb = lower_bound(arr, arr + n, key);
    cout << "Lower bound of key in arr is " << (lb - arr) << endl;

    // (b) upper bound of a number
    // this will give first element > key

    auto up = upper_bound(arr, arr + n, key);
    cout << "Uppper bound of key in arr is " << (up - arr) << endl;

    // find the occorence frequency of key in array
    cout<<"The occorence frequency of key in array "<<(up-lb)<< endl ;

}
