#include <bits/stdc++.h>
#include <cstring>
using namespace std;



// Node Class
class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        next = NULL;
    }

    void display()
    {
        cout << data << endl;
        cout << next << endl;
    }
};
