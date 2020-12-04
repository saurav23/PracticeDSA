#include <iostream>
using namespace std;

// length finding
int length(char input[])
{
    int count = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

// fuction overloaded
bool checkPalindrome(char input[], int start, int end)
{
    // base case
    if (input[0] == '\0' || input[1] == '\0')
    {
        return true;
    }
    if (start >= end)
    {
        return true;
    }

    if (input[start] == input[end])
    {
        return checkPalindrome(input, start + 1, end - 1);
    }
    else
    {
        return false;
    }
}

// function
bool checkPalindrome(char input[])
{
    int count = length(input);
    return checkPalindrome(input, 0, count - 1);
}

// main
int main()
{
    char input[50];
    cin >> input;

    if (checkPalindrome(input))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
}