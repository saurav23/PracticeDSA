#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;

int stringToInteger(char input[])
{
    int len = strlen(input);

    // base case
    if (len == 1)
    {
        return input[0] - '0';
    }

    int num = input[0] - '0';
    int smallAns = stringToInteger(input + 1);
    return num * pow(10, (len - 1)) + smallAns;
}

//main
int main()
{
    char target[100];
    cin >> target;
    cout << stringToInteger(target);
    cout << "----------------" << endl;
    cout << endl;
}