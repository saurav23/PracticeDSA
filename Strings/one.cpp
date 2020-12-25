#include <iostream>
#include <cstring> // for string class
using namespace std;

//main
int main()
{
    //  Part 1
    string sen;

    getline(cin, sen);

    cout << sen;

    // pushes 's' in this case
    sen.push_back('a');

    cout << endl;
    cout << sen;

    // pops 's' in this case
    sen.pop_back();

    cout << endl;
    cout << sen;

    //-----------------------------
    cout << endl;
    return 0;
}