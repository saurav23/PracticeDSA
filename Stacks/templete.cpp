#include <bits/stdc++.h>
#include <cstring>
using namespace std;
#include "intro.cpp"

template <typename t, typename v>
class Pair
{
    t x;
    v y;

public:
    void setX(t x)
    {
        this->x = x;
    }

    t getX()
    {
        return x;
    }

    void setY(v y)
    {
        this->y = y;
    }

    v getY()
    {
        return y;
    }
};

// main
int main()
{
    Pair<Pair<int, int>, int> p1;
    p1.setY(15);
    Pair<int, int> p4;
    p4.setX(5);
    p4.setY(10);
    p1.setX(p4);
    cout << p1.getX().getX() << endl;
    cout << p1.getX().getY() << endl;
    cout << p1.getY() << endl;
}