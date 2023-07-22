#include <iostream>
using namespace std;

int main()
{
        float *ptrx = NULL , *ptry = NULL;
   
        ptrx = new float(4.5);
        ptry = new float(9.3);
        
        cout << "The address of ptrx " << ptrx << endl;
        cout << "The value of ptrx " << *ptrx << endl;
        cout << "The value of memory location where it point to " << *ptrx << endl;
        cout << "The address of ptry " << ptry << endl;
        cout << "The value of ptry " << *ptry << endl;
        cout << "The value of memory location where it point to " << *ptry << endl;
        
        return 0;
}