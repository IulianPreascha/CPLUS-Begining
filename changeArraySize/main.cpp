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

void push_back(int *&arr, int &size, const int value)
{
    int *newArray = new int[size + 1];
    for (int i = 0; i < size; i++)
    {
        newArray[i] = arr[i];
    }

    newArray[size] = value;
    size++;

    delete[] arr;

    arr = newArray;
}

void pop_back(int *&arr, int &size)
{
    size--;
    int *newArray = new int[size];
    for (int i = 0; i < size; i++)
    {
        newArray[i] = arr[i];
    }

    delete[] arr;

    arr = newArray;
}

void push_front(int *&arr, int &size, const int value)
{
    int *newArray = new int[size + 1];
    for (int i = 0; i < size; i++)
    {
        newArray[i + 1] = arr[i];
    }

    newArray[0] = value;
    size++;

    delete[] arr;

    arr = newArray;
}

void pop_front(int *&arr, int &size)
{
    size--;
    int *newArray = new int[size];
    for (int i = 1; i < size; i++)
    {
        newArray[i - 1] = arr[i];
    }

    delete[] arr;

    arr = newArray;
}

void push_WhereUWant(int *&arr, int &size, const int value)
{
    int *newArray = new int[size + 1];
    int yourPoint = (size / 2);
    for (int i = 0; i < size; i++)
    {
        if (i == yourPoint)
        {
            for (int j = yourPoint; j < size; j++)
            {
                newArray[j + 1] = arr[j];
            }
            break;
        }

        newArray[i] = arr[i];
    }

    newArray[yourPoint] = value;
    size++;

    delete[] arr;

    arr = newArray;
}

void pop_WhereUWant(int *&arr, int &size)
{
    int *newArray = new int[size];
    int yourPoint = (size / 2);
    for (int i = 0; i < size; i++)
    {
        if (i == yourPoint)
        {
            for (int j = yourPoint; j < size; j++)
            {
                newArray[j - 1] = arr[j];
            }
            break;
        }

        newArray[i] = arr[i];
    }
    size--;

    delete[] arr;

    arr = newArray;
}

// void push_WhereUWant(int *&arr, int &size, const int value)
// {
//     int *newArray = new int[size + 1];
//     int yourPoint = (size / 2);
//     for (int i = size; i >= yourPoint + 1; i--)
//     {
//         newArray[i] = arr[i - 1];
//     }
//     size++;
//     newArray[yourPoint] = value;

//     delete[] arr;

//     arr = newArray;
// }

// void pop_WhereUWant(int *&arr, int &size)
// {
//     int *newArray = new int[size];
//     int yourPoint = (size / 2);
//     for (int i = yourPoint; i <= size - 1; i++)
//     {
//         newArray[i] = arr[i + 1];
//     }
//     size--;

//     delete[] arr;

//     arr = newArray;
// }

int main()
{
    int size = 5;
    int *arr = new int[size];
    FillArray(arr, size);
    ShowArray(arr, size);

    fout << "======(Push back)======" << endl;

    push_back(arr, size, 111);
    ShowArray(arr, size);

    fout << "======(Pop back)======" << endl;

    pop_back(arr, size);
    ShowArray(arr, size);

    fout << "======(Push front)======" << endl;

    push_front(arr, size, 222);
    ShowArray(arr, size);

    fout << "======(Pop front)======" << endl;

    pop_front(arr, size);
    ShowArray(arr, size);

    fout << "======(Push WhereYouWant)======" << endl;

    push_WhereUWant(arr, size, 333);
    ShowArray(arr, size);

    fout << "======(Pop WhereYouWant)======" << endl;

    pop_WhereUWant(arr, size);
    ShowArray(arr, size);

    delete[] arr;

    return 0;
}