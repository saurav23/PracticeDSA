#include <iostream>
using namespace std;

// fuction
int fib(int n)
{
    // base case
    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    int smallOutput1 = fib(n - 1);
    int smallOutput2 = fib(n - 2);
    return smallOutput1 + smallOutput2;
}

// main
int main()
{
    int n;
    cin >> n;
    cout << fib(n) << endl;
}
