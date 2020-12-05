#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> vector1;
    vector1.push_back(1);
    vector1.push_back(2);
    vector1.push_back(3);
    vector1.push_back(4);
    vector1.push_back(4);

    for (int i = 0; i <= vector1.size(); i++)
    {
        cout << vector1[i] << " ";
    }
    cout << endl;

    vector<int>::iterator it;
    for (it = vector1.begin(); it != vector1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    for (auto element : vector1)
    {
        cout << element << " ";
    }
    cout << endl;

    vector1.pop_back();
    vector<int>::iterator it1;
    for (it1 = vector1.begin(); it1 != vector1.end(); it1++)
    {
        cout << *it1 << " ";
    }
    cout << endl;

    cout << "git";

    // ----------------------------
    cout << endl;
    return 0;
}