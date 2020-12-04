#include <iostream>
#include <math.h>
using namespace std;

//  fuction
int NewNumber(int number)
{
    int count = 0;
    int lastDigit;
    int finalNumber = 0;
    while (number >= 0)
    {
        lastDigit = number % 10;
        int newLastDigit = 9 - lastDigit;
        finalNumber = newLastDigit * (pow)(10, count) + finalNumber;
        number = number / 10;
        count++;
    }
    return finalNumber;
}

// main
int main()
{
    int number;
    cin >> number;
    cout << "----------------------" << endl;
    cout << NewNumber(number) << endl;
}





