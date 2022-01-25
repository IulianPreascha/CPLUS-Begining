#include <iostream>
using namespace std;

int Sum(int a, int b)
{
    return a+b;
}

int main()
{
    int a = 5;
    int b = 6;
    int c;

    c = Sum(a,b);

    cout << c << endl;
}