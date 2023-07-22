#include<iostream>
using namespace std;
#define SIZE 6
int *getPositiveNumber(const int arr[] , const int size , int& newSize);

int main()
{
    int arr[SIZE] , newArraySize = 0; 

    for (int i = 0; i < SIZE; i++)
    {
         cout <<"Enter element " << i + 1 <<endl;
         cin >>arr[i];
    }

    int *p1 = getPositiveNumber(arr , SIZE , newArraySize);
    if (newArraySize == 0)
    {
        cout <<"No positive number are present " <<endl;
    }
    else
    {
      cout <<"Positive digits are:" << endl;

       for (int i = 0; i < newArraySize; i++)
       {
          cout << p1[i] <<endl;
       }
    }

    if (newArraySize != 0)
    {
       delete[] p1;
       p1 = NULL;
    }
    
    return 0;
}

int *getPositiveNumber(const int arr[] , const int size , int& newSize)
{

    int index = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] > 0)
        {
            newSize++;
        }
    }

    int *p = new int[newSize];

    for (int i = 0; i < size; i++)
    {
        if(arr[i] > 0)
        {
            p[index] = arr[i];
            index++;
        }
    }
    if (newSize == 0)
    {
        p = NULL;
    }
    
    return p;
}