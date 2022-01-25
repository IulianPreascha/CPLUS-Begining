#include <bits/stdc++.h>
using namespace std;

ofstream fout("test.txt");

class Point
{
private:
    int x;
    int y;

public:
    void SetY(int valueY)
    {
        y = valueY;
    }

    int GetY()
    {
        return y;
    }

    int GetX()
    {
        return x;
    }

    void SetX(int valueX)
    {
        x = valueX;
    }

    void Print()
    {
        fout << "X = " << x << "\nY = " << y << endl;
    }
};

int main()
{
    Point a;
    a.SetY(11);
    a.SetX(5);
    a.Print();
    // int result = a.GetX();
    // fout << result;

    return 0;
}