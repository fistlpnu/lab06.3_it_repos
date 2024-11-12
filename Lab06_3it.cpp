#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <algorithm>  

using namespace std;

template <typename T>
void generateArray(T arr[], int size, T minVal, T maxVal)
{
    for (int i = 0; i < size; ++i)
    {
        arr[i] = minVal + rand() % (maxVal - minVal + 1);
    }
}

template <typename T>
void printArray(const T arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << setw(5) << arr[i];
    }
    cout << endl;
}

template <typename T>
void sortArray(T arr[], int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    srand(static_cast<unsigned>(time(0)));

    const int SIZE = 10;
    const int MIN_VAL = -50;
    const int MAX_VAL = 50;

    int arr[SIZE];

    generateArray(arr, SIZE, MIN_VAL, MAX_VAL);

    cout << "Initial array:" << endl;
    printArray(arr, SIZE);

    sortArray(arr, SIZE);

    cout << "Sorted array by non-descending order:" << endl;
    printArray(arr, SIZE);

    return 0;
}
