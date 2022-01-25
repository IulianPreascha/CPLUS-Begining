#include <bits/stdc++.h>
using namespace std;

ofstream fout("test.txt");

// TODO copy Dynamic Array

void FillArray(int *const arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }
}

void ShowArray(const int *const arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        fout << arr[i] << '\t';
    }
    fout << endl;
}

int main()
{
    int size = 10;
    int *firstArray = new int[size];
    int *secondArray = new int[size];

    FillArray(firstArray, size);
    FillArray(secondArray, size);

    fout << "FirstArray =\t";
    ShowArray(firstArray, size);
    fout << "SecondArray =\t";
    ShowArray(secondArray, size);

    delete[] firstArray;

    firstArray = new int[size];
    for (int i = 0; i < size; i++)
    {
        firstArray[i] = secondArray[i];
    }

    fout << "================================" << endl;

    fout << "FirstArray =\t";
    ShowArray(firstArray, size);
    fout << "SecondArray =\t";
    ShowArray(secondArray, size);

    delete[] secondArray;
    delete[] firstArray;
    return 0;
}