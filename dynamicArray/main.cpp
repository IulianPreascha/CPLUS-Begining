#include <bits/stdc++.h>
using namespace std;

ofstream fout("text.txt");

int main()
{
    int size = 5;
    // cout << "enter array size => ";
    // cin >> size;
    int *arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }

    for (int i = 0; i <= size; i++)
    {
        fout << arr[i] << "\t";
        fout << arr + i << endl;
    }
    delete[] arr;
}