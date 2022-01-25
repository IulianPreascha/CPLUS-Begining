#include <bits/stdc++.h>
using namespace std;

ofstream fout("test.txt");

class CofeeGrinder
{
private:
    bool CheckVoltage()
    {
        return true;
    }

public:
    void Start()
    {
        if (CheckVoltage())
        {
            fout << "VjuHHH!!" << endl;
        }
        else
        {
            fout << "Beep Beep" << endl;
        }
    }
};

class Point
{
private:
    int x;
    int y;

public:
    Point()
    {
        x = 0;
        y = 0;
        fout << this << " constructor" << endl;
    }

    Point(int valueX, int valueY)
    {
        x = valueX;
        y = valueY;
        fout << this << " constructor" << endl;
    }

    Point(int valueX, bool boolean)
    {
        x = valueX;
        if (boolean)
        {
            y = 1;
        }
        else
        {
            y = -1;
        }
    }

    void SetY(int y)
    {
        this->y = y;
    }

    int GetY()
    {
        return y;
    }

    int GetX()
    {
        return x;
    }

    void SetX(int valueX)
    {
        x = valueX;
    }

    void Print()
    {
        fout << "X = " << x << "\tY = " << y << endl;
    }
};

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

class MyClass
{
private:
    int *data;

public:
    MyClass(int size)
    {
        data = new int[size];

        for (int i = 0; i < size; i++)
        {
            data[i] = i;
        }

        fout << "Обьект " << data << " Вызвался конструктор" << endl;
    }

    ~MyClass()
    {
        delete[] data;
        fout << "Обьект " << data << " Вызвался деструктор" << endl;
    }
};

void Foo()
{
    fout << "Foo начало выполнения" << endl;
    MyClass a(1);
    fout << "Foo конец выполнения" << endl;
}

int main()
{
    Point a;
    a.SetY(5);
    a.Print();

    return 0;
}