//TASK3

#include<iostream>
using namespace std;
#define SIZE 5
void arrayByPointer(float *arrPtr , int size);
int main()
{
    float arr[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
         cout << "Enter array element " << i << endl;
        cin >> arr[i];
    }
    arrayByPointer(arr ,  SIZE);
    return 0;
}
void arrayByPointer(float *arrPtr , int size)
{
    for (int i = 0; i < size; i++)
    {
        cout <<"The address of each array location is " << arrPtr + i << endl;
        cout <<"The value of each array location is " << *(arrPtr + i) << endl;
    }    
}