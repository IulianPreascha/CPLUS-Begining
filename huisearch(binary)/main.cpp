#include <bits/stdc++.h>
using namespace std;

void rand_fill(int arr[], int size)
{
    bool alreadyHere;
    srand(time(NULL));
    for (int i = 0; i < size;)
    {
        alreadyHere = false;
        int newRandonmValue = rand() % 100;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] == newRandonmValue)
            {
                alreadyHere = true;
                break;
            }
        }

        if (!alreadyHere)
        {
            arr[i] = newRandonmValue;
            i++;
        }
    }

    return;
}

void show_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return;
}

void my_sort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
            if (arr[j] < arr[i])
                swap(arr[i], arr[j]);
    }
}

int bin_search(int x, int arr[], int size)
{
    int min = 0, mid, max = size - 1;
    while (min <= max)
    {
        mid = (max + min) / 2;
        if (x > arr[mid])
        {
            min = mid + 1;
        }
        else if (x < arr[mid])
        {
            max = mid - 1;
        }
        else
            return mid;
    }

    return -1;
}

int main()
{
    int x;
    cout << "x = ";

    cin >> x;
    int array_size;
    
    cout << "array_sieze = ";
    cin >> array_size;
    
    int array[array_size];
    
    rand_fill(array, array_size);
    show_array(array, array_size);
    cout << endl;
    
    my_sort(array, array_size);
    show_array(array, array_size);
    cout << endl;
    
    int res = bin_search(x, array, array_size);
    cout << "result = " << res;

    return 0;
}
