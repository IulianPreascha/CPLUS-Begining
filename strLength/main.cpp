#include <bits/stdc++.h>
using namespace std;

ofstream fout("test.txt");

int strLength(const char *str)
{
    int counter = 0;

    while (str[counter] != '\0')
    {
        counter++;
    }

    return counter;
}

int main()
{
    char *str = "Helloo";
    fout << strLength(str) << endl;
}