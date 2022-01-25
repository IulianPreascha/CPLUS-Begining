#include <bits/stdc++.h>
using namespace std;

const int n = 7;
int first, last;

//функция сортировки
void quicksort(int *mas, int first, int last)
{
    int mid, count;
    int f = first, l = last;
    mid = mas[(f + l) / 2]; //вычисление опорного элемента
    do
    {
        while (mas[f] < mid)
            f++;
        while (mas[l] > mid)
            l--;
        if (f <= l) //перестановка элементов
        {
            count = mas[f];
            mas[f] = mas[l];
            mas[l] = count;
            f++;
            l--;
        }
    } while (f < l);
    if (first < l)
        quicksort(mas, first, l);
    if (f < last)
        quicksort(mas, f, last);
}

void rand_fill(int *mas, int n)
{
    bool alreadyHere;
    srand(time(NULL));
    for (int i = 0; i < n;)
    {
        alreadyHere = false;
        int newRandonmValue = rand() % 100;
        for (int j = 0; j < i; j++)
        {
            if (mas[j] == newRandonmValue)
            {
                alreadyHere = true;
                break;
            }
        }

        if (!alreadyHere)
        {
            mas[i] = newRandonmValue;
            cout << mas[i] << " ";
            i++;
        }
    }

    return;
}

//главная функция
int main()
{
    int *A = new int[n];
    cout << "Source array: ";
    rand_fill(A, n);
    first = 0;
    last = n - 1;
    quicksort(A, first, last);
    cout << endl
         << "Resulting array: ";
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    delete[] A;

    return 0;
}