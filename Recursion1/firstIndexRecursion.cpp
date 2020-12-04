#include <iostream>
using namespace std;
// function
int firstIndex(int arr[], int a, int x)
{    //base case
    if (a == 0)
    {
        return -1;
    }
    if (arr[0] == x)
    {
        return 0;
    }

    int ans = firstIndex(arr + 1, a - 1, x);
    if (ans != -1)
    {
        return ans + 1;
    }
    else
    {
        return ans;
    }
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
