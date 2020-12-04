#include <iostream>
using namespace std;
// function
int countZeros(int num)
{
    //base case
    if (num < 9)
    {
        if (num == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int count = 0;
    if (num%10 == 0)
    {
        count++;
    }
    int smallAns = countZeros(num / 10);
    return smallAns + count;
}

int main()
{
    int num;
    cin >> num;
    cout << countZeros(num);
}