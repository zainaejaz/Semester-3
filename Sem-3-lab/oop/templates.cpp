#include<iostream>

using namespace std;

template<class arType>
class Array
{
    arType* data;
    int size;

public:
    Array(int size);
    friend istream& operator>><arType>(istream& input, Array<arType>& obj);
    friend ostream& operator<<<arType>(ostream& out, Array<arType>& obj);

    Array<arType> getSubArray(int sI, int lI);
};

template<class arType>
Array<arType>::Array(int size)
{
    this->size = size;
    data = new arType[size];

    for (int i = 0; i < size; ++i)
    {
        data[i] = 0;
    }
}

template<class arType>
istream& operator>>(istream& input, Array<arType>& obj)
{
    for (int i = 0; i < obj.size; ++i)
    {
        input >> obj.data[i];
    }

    return input;
}

template<class arType>
ostream& operator<<(ostream& out, Array<arType>& obj)
{
    for (int i = 0; i < obj.size; ++i)
    {
        out << obj.data[i] << " ";
    }

    return out;
}

template<class arType>
Array<arType> Array<arType>::getSubArray(int sI, int lI)
{
    int new_size = lI - sI + 1;

    if (sI >= 0 && lI < size && new_size > 0)
    {
        Array<arType> newCollection(new_size);

        for (int i = sI; i <= lI; ++i)
        {
            newCollection.data[i - sI] = data[i];
        }

        return newCollection;
    }
    else
    {
        cout << "Error: Invalid subarray indices." << endl;
        return Array<arType>(0);
    }
}

int main()
{
    Array<int> o1(5);

    cin >> o1;

    cout << o1 << endl;

    Array<int> o2 = o1.getSubArray(5, 6);

    cout << o2 << endl;

    return 0;
}
