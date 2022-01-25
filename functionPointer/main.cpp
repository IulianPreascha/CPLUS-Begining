#include <bits/stdc++.h>
using namespace std;

ofstream fout("test.txt");

string GetDataFromBD()
{
    return "Data From BD";
}

string GetDataFromWebServer()
{
    return "Data From Web Server";
}

string GetDataFromAstral()
{
    return "Data From Astral";
}

void ShowInfo(string (*foo)())
{
    fout << foo() << endl;
}

int main()
{
    ShowInfo(GetDataFromAstral);
}