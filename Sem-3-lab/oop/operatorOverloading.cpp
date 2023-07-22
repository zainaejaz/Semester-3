#include<iostream>
using namespace std;

class Algebraa
{
private:
    int x , y;
    const int c;
public:
    Algebraa(int a , int b, int c);
    ~Algebraa();
    void display();
    Algebraa operator+(const Algebraa&obj);

};

Algebraa::Algebraa(int a , int b, int c) : c(c)
{
    this->x = a;
    this->y = b;
}

Algebraa::~Algebraa()
{

}

void Algebraa::display()
{
    cout <<"X value " << x << endl;
    cout <<"X value " << y << endl;
    cout <<"X value " << c << endl;
}

Algebraa Algebraa:: operator+(const Algebraa&obj)
{
    	return Algebraa(x + obj.x, y + obj.y, c + obj.c);
}

int main()
{

   Algebraa o1(1 , 2 , 3) , o2(4 , 5 , 6);
   Algebraa o3 = o1 + o2;
   o3.display();

   return 0;
}