#include <bits/stdc++.h>
using namespace std;

ofstream fout("test.txt");

int main()
{
    int a = 10;

    if (a < 10)
    {
        fout << "а меньше 10" << endl;
    }
    else
    {
        if (a > 10)
        {
            fout << "a больше 10" << endl;
        }
        else
        {
            fout << "a равна 10" << endl;
        }
    }

    fout << "===================" << endl;

    (a < 10) ? fout << "а меньше 10" << endl : (a > 10) ? fout << "a больше 10" << endl
                                                        : fout << "a равна 10" << endl;
}