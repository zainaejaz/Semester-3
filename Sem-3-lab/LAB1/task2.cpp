//TASK2

#include<iostream>
using namespace std;
void subtractByPointer(double *p1 , double *p2 , double *p3);
#define SIZE 10
int main()
{
    double x , y , z;
    cout <<"Enter value 1 " << endl;
    cin >> x;
    cout <<"Enter value 2 " << endl;
    cin >> y;
    subtractByPointer(&x , &y , &z);
    cout << z;
    return 0;
}
void subtractByPointer(double *p1 , double *p2 , double *p3)
{
    *p3 = *p1 - *p2;
}