#include<iostream>
using namespace std;

class Collection 
{
private:
    int *data;
    int size;
public:

 //constructor and destructor prototypes

//parametrized constructor

Collection (int size)
{
    this->size = size;  //initializing size of array

    this->data = new int[size]; //allocate memory on heap

    for (int i = 0; i < size; i++)
    {
        this->data[i] = 0;
    }
    
}

Collection (int arr[] , int size)
{
    this->size = size;  //initializing size of array

    this->data = new int[size]; //allocate memory on heap

    for (int i = 0; i < size; i++)
    {
        this->data[i] = arr[i];
    }
    
}

//deep constructor to avoid pointing same memory

Collection (const Collection& obj)
{
    this->size = obj.size;
    this->data = new int[size];

    for (int i = 0; i < size; i++)
    {
        this->data[i] = obj.data[i];
    }

}

//destructor

 ~Collection()
{
    delete [] data;
}


//non-static member functions and operators 

int getSize() const   //getter
{
    return size;
}

//insert new integer k at index i

void setElement(int i , int k)  //setter
{

     if (i >= 0 && i < size)
     {
        this->data[i] = k;
     }
     else
     {
        cout << "Array Index is Out-of-Bound" << endl;
     }

}

//returns the total occurrences of key in the collection

int countElement(const int key)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (data[i] == key)
        {
            count++;
        }
    }

    return count;

}

Collection operator=(const Collection& obj)
{
    if (this != &obj)
    {
        if (size != obj.size)
        {
            delete[] data;     //reallocate the memory for the left-hand-side object based on the size of the right-hand-side object
            size = obj.size;
            data = new int[size];
        }  
        
        for (int i = 0; i < size; i++)
        {
            this->data[i] = obj.data[i];  //initializing object's array with the data of right-hand side object
        }
    }
    
    return *this;
}

Collection getSubCollection(int start_index, int end_index)
{
    int newSize = (end_index - start_index) + 1;
    Collection newCollection(newSize);
    int index = 0;

    if (start_index >= 0 && end_index < size)
    {
    
    for (int i = start_index; i <= end_index; i++)
    {
        newCollection.data[index] = data[i];
        index++;
    }

    }
    else
    {
         cout << "Array Index is Out-of-Bound" << endl;
         newCollection.data = NULL;
         newCollection.size = 0;
    }
    
    return newCollection;
}

friend istream &operator>>(istream &input , Collection &obj)
{

    for (int i = 0; i < obj.size; i++)
    {
       input >> obj.data[i];
    }
    
    return input;
}

friend ostream &operator<<(ostream &print ,const Collection &obj)
{
    for (int i = 0; i < obj.size; i++)
    {
       print << obj.data[i] << endl << endl;
    }

    return print;
}

Collection operator+(const Collection &obj)
{
    int newSize = obj.size;
    Collection sum(newSize);

    if (obj.size == this->size)
    {
    for (int i = 0; i < obj.size; i++)
    {
       sum.data[i] = this->data[i] + obj.data[i];
    }
    }
    else
    {
        cout << "Two collections have different sizes " <<endl;
        sum.data = NULL;
        sum.size = 0;
    }
     
    return sum;
}

int& operator[](int index)
{
    
    static int x = 99;
    if (index >= 0 && index < size)
    {
        return data[index];
    }
    else
    {
        cout << "Array Index is Out-of-Bound" << endl;
        return x;
    }    
}

int operator[](int index) const
{
    if (index >= 0 && index < size)
    {
        return data[index];
    }
    else
    {
        cout << "Array Index is Out-of-Bound" << endl;
        return 99;
    }    
}

bool operator-()
{
    for (int i = 0; i < size; i++)
    {
        if (data[i] > 0)
        {
            return false;
        }
    }

    return true;
    
}

};



int main()
{


	Collection obj1(5) , obj2(obj1) , obj3(5);

    cin >> obj1;

    cout << obj1 << endl;

    obj1.setElement(2 , 5);

    cout << "The inserted value of obj1[2] = "<< obj1[2] << endl;
    cout << "the total occurrences of it in the collection " << obj1.countElement(5) << endl;

    cout << "enter element of first collection"<< endl;
    cin >> obj2;


    cout << "enter element of second collection"<< endl;
    cin >> obj3;

    Collection o4 = obj2 + obj3;

    cout << "the addition of two objects is" << o4 << endl;

    obj1[2] = 8;

    cout << "obj1[2]: " << obj1[2] << endl;
    // cout << "obj1[2]: " << obj2[2] << endl;

   return 0;
} 