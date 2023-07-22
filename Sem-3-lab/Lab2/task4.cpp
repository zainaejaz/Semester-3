#include <iostream>
using namespace std;
#define SIZE 6
void getEvenOdd(const int arr[], const int size, int *&evenArray, int &evenSize, int *&oddArray, int &oddSize);

int main()
{
    int arr[SIZE], *evenArr = NULL, *oddArr = NULL;
    int evenSize = 0, oddSize = 0;

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter element " << i + 1 << endl;
        cin >> arr[i];
    }

    getEvenOdd(arr, SIZE, evenArr, evenSize, oddArr, oddSize);

    if (evenSize != 0)
    {
        cout << "Even array are :" << endl;

        for (int i = 0; i < evenSize; i++)
        {
            cout << evenArr[i] << endl;
        }
    }

    else
    {
        cout << "Even numbers are not exist in this array:" << endl;
    }

    if (oddSize != 0)
    {
        cout << "Odd array are :" << endl;

        for (int i = 0; i < oddSize; i++)
        {
            cout << oddArr[i] << endl;
        }
    }

    else
    {
        cout << "Odd numbers are not exist in this array:" << endl;
    }

    if (evenSize != 0 && oddSize)
    {
        delete[] evenArr;
        delete[] oddArr;
    }

    return 0;
}

void getEvenOdd(const int arr[], const int size, int *&evenArray, int &evenSize, int *&oddArray, int &oddSize)
{

    int count1 = 0, count2 = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenSize++;
        }
        
        else if (arr[i] % 2 != 0)
        {
            oddSize++;
        }
    }

    evenArray = new int[evenSize]; 

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenArray[count1] = arr[i];
            count1++;
        }
    }

    oddArray = new int[oddSize];
    
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            oddArray[count2] = arr[i];
            count2++;
        }
    }
}