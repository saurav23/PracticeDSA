#include <iostream>
using namespace std;

// fuction to find length of string
int lenght(char input[])
{
    //base case
    if (input[0] == '\0')
    {
        return 0;
    }

    int smallStringLength = lenght(input + 1);
    return 1 + smallStringLength;
}

// main
int main()
{
    char input[100];
    cin >> input;

    int len = lenght(input);
    cout << len << endl;
}