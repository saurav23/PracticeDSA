#include <iostream>
using namespace std;

// fuction
int count(int n)
{   
    // base case
    if (n == 0)
    {
        return 0;
    }
    int smallAns = count(n / 10);
    return smallAns + 1;
}

// main
int main()
{
    int n;
    cin >> n;
}