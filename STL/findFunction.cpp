#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // finding element in an unsorted array !
    int arr[] = {1, 7, 99, 11, 50};
    int n = sizeof(arr) / sizeof(int);

    int key = 11;
    auto it = find(arr, arr + n, key);

    int index = it - arr;

    if (index == n)
    {
        cout << "Not Present in the array!" << endl;
    }
    else
    {
        cout << "Index of Key in array is: " << index << endl;
    }
}