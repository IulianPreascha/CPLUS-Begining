#include <bits/stdc++.h>
using namespace std;

ofstream fout("test.txt");

class Human
{
public:
    int age;
    int weight;
    string name;

    void Print()
    {
        fout << "Имя " << name << "\nВес " << weight << "\nВозраст " << age << endl;
    }
};

int main()
{
    Human firstHuman;
    firstHuman.age = 30;
    firstHuman.name = "Ivanov Ivan";
    firstHuman.weight = 100;

    firstHuman.Print();

    fout << "=========================" << endl;

    Human secondHuman;
    secondHuman.age = 13;
    secondHuman.name = "Noname";
    secondHuman.weight = 65;

    secondHuman.Print();

    return 0;
}