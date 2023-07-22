
//TASK4

#include<iostream>
using namespace std;
void getMinMax(int *arr , int size , int * ptrMin , int * ptrMax);
#define SIZE 5
int main()
{
    int arr[SIZE] = {0};
    int min , max;
    for (int i = 0; i < SIZE; i++)
    {
       cout <<"Enter array elemet " << i + 1<< endl;
       cin >> *(arr + i);
    }
    getMinMax(arr , SIZE , &min , &max);
    cout <<"The minimum number " << min << endl;
    cout <<"The maximum number " << max << endl;
    return 0;
}
void getMinMax(int *arr , int size , int *ptrMin , int *ptrMax)
{
    *ptrMax = 0;
    *ptrMin = *(arr + 0);
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) > *ptrMax)
        {
            *ptrMax = *(arr + i);
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) < *ptrMin)
        {
            *ptrMin = *(arr + i);
        }
    }
}