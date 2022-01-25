#include <bits/stdc++.h>
using namespace std;

ofstream fout("text.txt");

int main()
{
    int *pa = new int;
    *pa = 10;
    fout << *pa << endl;
    delete pa;

    pa = NULL;

    if (pa != nullptr)
    {
        fout << pa << endl;
    }
    delete pa;
}