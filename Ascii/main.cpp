#include <bits/stdc++.h>
using namespace std;

ofstream fout("test.txt");

int main()
{
    for (int i = 0; i < 255; i++)
    {
        fout << "code = " << i << "\t"
             << "char = " << (char)i << endl;
    }
}