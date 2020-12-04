#include <iostream>
using namespace std;

// function power
int power(int x, int n)
{
    // base case
    if (n == 0)
    {
        return 1;
    }
    int smallAns = power(x, n - 1);
    int output = x * smallAns;
    return output;
}

// main
int main()
{
    int n;
    int x;
    cin >> n >> x;
    int output = power(x, n);
    cout << output << endl;
}

// int power(int x, int n)
// {
//     if (x == 0 && n == 0)
//     {
//         return 1;
//     }
//     if (x == 0)
//     {
//         return 0;
//     }
//     if (n == 0)
//     {
//         return 1;
//     }
//     int smallans = power(x, n / 2);
//     if (n % 2 == 0)
//     {
//         return smallans * smallans;
//     }
//     else
//     {
//         return x * smallans * smallans;
//     }
// }