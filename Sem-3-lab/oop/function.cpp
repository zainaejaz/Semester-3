#include<iostream>
using namespace std;
class Algebra
{
private:
    int x , y;
public:
    Algebra()
    {
        x = 0;
        y = 0;
    }

    Algebra(int a , int b)
    {
        x = a;
        y = b;
    }

    Algebra(Algebra& o1)
    {
        cout <<"Copy constructor " <<endl;
    }

    Algebra add(Algebra& obj1)
    {
        Algebra temp;
        temp.x = x + obj1.x;
        temp.y = y + obj1.y;
        return temp;
    }

    Algebra sub(Algebra& obj1)
    {
        Algebra temp;
        temp.x = x - obj1.x;
        temp.y = y - obj1.y;
        return temp;
    }

    Algebra mul(Algebra& obj1)
    {
        Algebra temp;
        temp.x = x * obj1.x;
        temp.y = y * obj1.y;
        return temp;
    }

    Algebra div(Algebra& obj1)
    {
        Algebra temp;
        temp.x = x / obj1.x;
        temp.y = y / obj1.y;
        return temp;
    }

    Algebra mod(Algebra& obj1)
    {
        Algebra temp;
        temp.x = x % obj1.x;
        temp.y = y % obj1.y;
        return temp;
    }

    bool equal(Algebra& obj1)
    {

        if (obj1.x == x && obj1.y == y && obj1.x == x && obj1.y == y)
        {
            return true;
        }
        else
        return false;
        
    }

    void print() 
    {
        cout << x << endl;
        cout << y << endl;
    }

};

int main()
{
    Algebra res , obj1(1 , 2) , obj2(3 , 4);
    res = obj1.add(obj2);
    cout << "The sum of two ojects is:" <<endl;
    res.print();

    res = obj1.sub(obj2);
    cout << "The subtraction of two ojects is:" <<endl;
    res.print();

    res = obj1.mul(obj2);
    cout << "The multiplication of two ojects is:" <<endl;
    res.print();

    res = obj1.div(obj2);
    cout << "The division of two ojects is:" <<endl;
    res.print();

    res = obj1.mod(obj2);
    cout << "The modulus of two ojects is:" <<endl;
    res.print();

    if (obj1.equal(obj2))
    {
        cout << "Objects are equal" <<endl;
    }
    else
      cout << "Objects are not equal" <<endl;

    return 0;
}