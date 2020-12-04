#include <iostream>
using namespace std;

// function
int multiply(int n, int m)
{
    // base case
    if (m == 0 || n == 0)
    {
        return 0;
    }
    int smallAnswer = multiply(n, m - 1);
    return n + smallAnswer;
}

//main
int main()
{
    int n, m;
    cin >> n >> m;
    cout << multiply(n, m);
}