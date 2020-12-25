#include <bits/stdc++.h>
#include <cstring>
using namespace std;
#include "intro.cpp"

// main
int main()
{
    StackUsingArray S1;
    S1.push(10);
    // S1.push(120);
    // S1.push(130);
    cout << S1.top();
    S1.pop() ;
    S1.isEmpty() ;
    //-----------------------------------------
    cout << endl;
    return 0;
}