#include <iostream>
using namespace std;

// print number
void printNum(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }
    printNum(n - 1);
    cout << n << " ";
}
// main
int main()
{
    int n;
    cin >> n;
    printNum(n);
}

// void print(int n)
// {
//     if (n == 1)
//     {
//         cout << n << " ";
//         return;
//     }
//     if (n == 0)
//     {
//         return;
//     }
//     print(n - 1);
//     cout << n << " ";
// }