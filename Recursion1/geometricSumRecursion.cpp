#include <iostream>
#include <cmath>
using namespace std;

// function
double geometricSum(int k)
{
    double current = 0;
    // base case
    if (k == 0)
    {
        return 1;
    }
    current = 1 / (pow(2, k));
    double smallAns = geometricSum(k - 1);
    return current + smallAns;
}

// main
int main()
{
    int k;
    cin >> k;
    cout << geometricSum(k);
}
