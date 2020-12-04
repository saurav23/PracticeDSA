#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    while (n != -1)
    {
        n++;
        cout << n;
    }
}

// //length
// int length(char input[])
// {
//     int count = 0;
//     for (int i = 0; input[i] != '\0'; i++)
//     {
//         count++;
//     }
//     return count;
// }

// // recusive fuction
// void replacePi(char input[], int start)
// {

//     // base case
//     if (input[start] == '\0' || input[start + 1] == '\0')
//     {
//         return;
//     }
//     replacePi(input, start + 1);
//     if (input[start] == 'p' && input[start + 1] == 'i')
//     {
//         int len = length(input);
//         input[len + 2] = '\0';
//         for (int i = len - 1; i >= start + 2; i--)
//         {
//             input[i + 2] = input[i];
//         }

//         input[start] = '3';
//         input[start + 1] = '.';
//         input[start + 2] = '1';
//         input[start + 3] = '4';
//     }
// }

// //replace
// void replacePi(char input[])
// {
//     replacePi(input, 0);
// }

// // main
// int main()
// {
//     char input[10000];
//     cin.getline(input, 10000);
//     replacePi(input);
//     cout << input << endl;
// }