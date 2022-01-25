#include <bits/stdc++.h>
using namespace std;

ofstream fout("test.txt");

class Human
{
public:
    int age;
    int weight;
    string name;
};

int main()
{
    Human firstHuman;

    firstHuman.age = 30;
    firstHuman.name = "Ivanov Ivan Ivanovici";
    firstHuman.weight = 100;

    fout << firstHuman.age << endl;
    fout << firstHuman.name << endl;
    fout << firstHuman.weight << endl;

    fout << "=======================" << endl;

    Human secondHuman;

    secondHuman.age = 19;
    secondHuman.name = "Noname";
    secondHuman.weight = 60;

    fout << secondHuman.age << endl;
    fout << secondHuman.name << endl;
    fout << secondHuman.weight << endl;

    return 0;
}