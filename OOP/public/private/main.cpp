#include <bits/stdc++.h>
using namespace std;

ofstream fout("test.txt");

class Point
{
public:
    int x = 2;

    void Print()
    {
        fout << "y = " << y << "\nx = " << x << "\n"
             << "z = " << z << endl;
        PrintY();
    }

private:
    int z = 3;
    int y = 1;

    void PrintY()
    {
        fout << y << endl;
        fout << "PrintY()";
    }
};

int main()
{
    Point a;
    a.Print();

    return 0;
}