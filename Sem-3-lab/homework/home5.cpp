#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class integerSet
{
private:
    int *integerArray;
    const int size;

public:

    // constructors and destructors

    integerSet(int s) : size(s) // initializing array to default data
    {

        integerArray = new int[s];
        for (int i = 0; i < s; i++)
        {
            integerArray[i] = 0;
        }
    }

    // parametrized constructors that initialize left-hand side array data to right-hand side array object

    integerSet(const integerSet &obj) : size(obj.size)
    {
        integerArray = new int[size];

        for (int i = 0; i < size; i++)
        {
            integerArray[i] = obj.integerArray[i];
        }
    }

    ~integerSet()
    {

        delete[] integerArray; // deallocate memory on heap
    }

    // overloaded operators

    friend ostream &operator<<(ostream &print, const integerSet &obj)
    {
        print << "{ ";

        for (int i = 0; i < obj.size; i++)
        {
            if (obj.integerArray[i] == 1)
            {

                print << i;

                if (i < obj.size && i != obj.size - 1)
                {
                    print << " , ";
                }

            }
            else
            {
                print << " --- ";

                if (i < obj.size && i != obj.size - 1)
                {
                    print << " , ";
                }
            }
        }

        print << " } ";

        return print;
    }

    integerSet operator=(const integerSet &obj)
    {

        if (this != &obj)
        {

            if (size == obj.size)
            {
                for (int i = 0; i < size; i++)
                {
                    integerArray[i] = obj.integerArray[i];
                }
            }
            
        }
        else
        {
            cout << "Size are not same " << endl;
        }

        return *this;
    }

    bool operator==(const integerSet &obj) const
    {

        if (size != obj.size)
        {
            return false;
        }

        for (int i = 0; i < obj.size; i++)
        {
            if (integerArray[i] != obj.integerArray[i])
            {
                return false;
            }
        }

        return true;
    }

    integerSet operator!()
    {
        integerSet newSet(size);

        for (int i = 0; i < size; i++)
        {
            if (integerArray[i] == 1)
            {
                newSet.integerArray[i] = 0;
            }
            else if (integerArray[i] == 0)
            {
                newSet.integerArray[i] = 1;
            }
        }

        return newSet;
    }

    // Non-static member function

    void insertElement(int k)
    {

        if (k >= 0 && k < size)
        {
            integerArray[k] = 1;
        }
        else
        {
            cout << "Integer are not in the range " << endl;
        }

    }

    void deleteElement(int k)
    {

        if (k >= 0 && k < size)
        {
            integerArray[k] = 0;
        }
        else
        {
            cout << "Integer are in the range " << endl;
        }
    }

    integerSet unionOfSets(const integerSet &obj)
    {

        integerSet newSetOfUnion(size);

        for (int i = 0; i < size; i++)
        {

            if (integerArray[i] == 1 || obj.integerArray[i] == 1)
            {
                newSetOfUnion.integerArray[i] = 1;
            }
            else if (integerArray[i] == 0 && obj.integerArray[i] == 0)
            {
                newSetOfUnion.integerArray[i] = 0;
            }
            
        }

        return newSetOfUnion;
    }

    integerSet intersectionOfSets(const integerSet &obj)
    {

        integerSet newSetOfintersection(size);

        for (int i = 0; i < size; i++)
        {
            if (integerArray[i] == 1 && obj.integerArray[i] == 1)
            {
                newSetOfintersection.integerArray[i] = 1;
            }
            else if (integerArray[i] == 0 || obj.integerArray[i] == 0)
            {
                newSetOfintersection.integerArray[i] = 0;
            }
        }

        return newSetOfintersection;
    }

    bool findElement(int k) const
    {

        if (k >= 0 && k < size)
        {
            if (integerArray[k] == 1)
            {
                return true;
            }
        }
        else
        {
            cout << "Invalid element: " << k << endl;
            return false;
        }
    }
};

int main()
{

    integerSet o1(10);

    integerSet o2(o1);

    o1.insertElement(0);
    o1.insertElement(1);
    o1.insertElement(3);
    o1.insertElement(4);
    o1.insertElement(7);
    o1.insertElement(9);

    o2.insertElement(2);
    o2.insertElement(3);
    o2.insertElement(4);
    o2.insertElement(8);
    o2.insertElement(9);
    o2.insertElement(5);

    if (o1 == o2)
    {
        cout << "\nTwo sets are equal " << endl
             << endl;
    }
    else
    {
        cout << "\nNot eqiual " << endl
             << endl;
    }

    cout << "Reverse of left-hand side object are: " << endl
         << endl;

    cout << !o1 << endl
         << endl;

    cout << "The union of two sets are: " << endl
         << endl;

    cout << o1.unionOfSets(o2) << endl
         << endl;

    cout << "The intersection of two sets are: " << endl
         << endl;

    cout << o1.intersectionOfSets(o2) << endl
         << endl;

    if (o1.findElement(3))
    {
        cout << "Element found " << endl
             << endl;
    }
    else
    {
        cout << "Element not found " << endl
             << endl;
    }

    return 0;
}