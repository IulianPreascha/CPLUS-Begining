#include <bits/stdc++.h>
using namespace std;

ofstream fout("text.txt");

int main()
{
    //? C

    char result[255]{};
    char str1[255] = "Hello";
    char str2[255] = "World";

    fout << str1 << endl;

    strcat(result, str1);
    strcat(result, str2);

    fout << result << endl;

    //? C++

    string str3 = "Hello";
    string str4 = "World";
    string str5 = "!";
    string result2;

    fout << str3 + " " + str4 + str5 << " => TEST" << endl;

    return 0;
}