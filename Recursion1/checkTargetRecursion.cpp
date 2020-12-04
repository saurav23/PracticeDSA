#include <iostream>
using namespace std;

// check target
bool checkTarget(int arr[], int size, int target)
{
    // base case
    if (size == 0)
    {
        return false;
    }

    if (arr[0] == target)
    {
        return true;
    }

    return checkTarget(arr + 1, size - 1, target);
}

// main
int main()
{
    int size;
    cin >> size;
    int arr[size];
    int target;
    cin >> target;
}