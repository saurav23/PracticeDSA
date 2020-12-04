#include <iostream>
#include <cstring>
using namespace std;

// function defination
void pairStar(char input[], int start)
{
    // base case
    if (input[start] == '\0')
    {
        return;
    }

    pairStar(input, start + 1);

    if (input[start] == input[start + 1])
    {
        int len = strlen(input);
        input[len + 1] = '\0';
        int i;
        for (i = len - 1; i >= start + 1; i--)
        {
            input[i + 1] = input[i];
        }
        input[i + 1] = '*';
    }
}

// prototype
void pairStar(char input[])
{
    pairStar(input, 0);
}

// main
int main()
{
    char input[100];
    cin >> input;
    pairStar(input);
    cout << input << endl;
}