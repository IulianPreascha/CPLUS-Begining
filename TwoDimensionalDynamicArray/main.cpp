#include <bits/stdc++.h>
using namespace std;

ofstream fout("text.txt");

int main()
{
    int rows = 4;
    int cols = 5;

    // cout << "Enter rows count => ";
    // cin >> rows;
    // cout << "Enter cols count => ";
    // cin >> cols;

    int **arr = new int *[rows];

    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }

    ////////////////////////////////*

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = rand() % 10;
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            fout << arr[i][j] << "\t";
        }
        fout << endl;
    }

    ////////////////////////////////*

    //! Delete new int[cols];
    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i];
    }

    //! Delete **arr;
    delete[] arr;
}