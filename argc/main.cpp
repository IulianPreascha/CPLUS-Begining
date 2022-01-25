#include <bits/stdc++.h>
using namespace std;

ofstream fout("test.txt");

int main(int argc, char *argv[])
{
    for (int i = 0; i < argc; i++)
    {
        fout << argv[i];
    }

    return 0;
}
