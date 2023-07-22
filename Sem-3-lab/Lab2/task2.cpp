#include<iostream>
using namespace std;

int main()
{
    int size , sum = 0;

    cout <<" Enter size of an array" <<endl;
    cin>>size;

    int *p = new int[size];

    for (int i = 0; i < size; i++)
    {
        cout <<"Enter element " << i + 1 <<endl;
        cin >>p[i];
        sum = sum + p[i];
    }

    cout <<"The sum of array element is "<< sum << endl;

    delete[] p;

    return 0;
}