#include<iostream>
using namespace std;
int main()
{
    int x = 2 , y = 8;
    int *ptrx = &x, *ptry = &y;
    cout <<"The address  of x " << ptrx <<endl;
    cout << "The value of x " << x <<endl;
    cout << "The address of ptrx " << &ptrx <<endl;
    cout << "The value of ptrx " << ptrx << endl;
    cout << "tHE value of memory location where it point to " << *ptrx << endl;
    cout <<"The address  of y " << ptry <<endl;
    cout << "The value of y " << y <<endl;                 
    cout << "The address of ptry " << &ptry <<endl;          
    cout << "The value of ptry " << ptry <<endl;
    cout << "tHE value of memory location where it point to " << *ptry << endl;
    return 0;
}
