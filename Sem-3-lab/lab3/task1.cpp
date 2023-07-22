#include <iostream>
using namespace std;
int *pairWiseSum(const int arr[], const int size, int &newArraySize);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9 , 10 , 11};   //initialize array randomly either even or odd
    int newArraySize = 0;                               //hold size of new array
    int size = sizeof(arr) / sizeof(arr[0]);

    int *p = arr;

    p = pairWiseSum(arr, size, newArraySize);           //function call

    if (size % 2 == 0)                                   //display content if array size are even
    {
        for (int i = 0; i < newArraySize; i++)
        {
            cout << "Even Array elements are:" << endl;
            cout << p[i] << endl;
        } 
    }
    else if (size % 2 != 0)                                  //display content if array size are odd
    {
       cout << "Odd Array elements are:" << endl;
        for (int j = 0; j < newArraySize; j++)
        {
            cout << p[j] << endl;
        }
    }

    delete[] p;                                        //free the memory

    return 0;
}

int *pairWiseSum(const int arr[], const int size, int &newArraySize)
{

    if (size % 2 == 0)          //find array size that is even or odd
    {
        newArraySize = size / 2;
    }
    
    else
    {
        newArraySize = (size / 2) + 1;
    }

    int *p = new int[newArraySize];           //dynamically allocate memory
  
    if (size % 2 == 0)                               //calculate pair of sum of even array
    {
        for (int i = 0 , j = 0; i < newArraySize; i++)
        {
            p[i] = arr[j] + arr[j + 1];
            j = j + 2;
        }
    }
    else
    {
        if (size % 2 != 0)                                     //calculate pair of sum of odd array
        {
            for (int i = 0 , j = 0; i < newArraySize; i++)
            {
                p[i] = arr[j] + arr[j + 1];
                j = j + 2;

                if (newArraySize == (i + 1))
                {
                    p[i] = arr[size - 1];
                }
                
            }
        }
    }

    return p;            //return a pointer
}