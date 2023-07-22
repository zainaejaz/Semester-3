#include<iostream>
using namespace std;

class Circle
{
private:
     int x_axis;
     int y_axis;
     float radius;
     static const double PI;  //static variable declaration inside the class

public:

//Mutators

void setX_axis(int x_axis)
{
     if (x_axis >= -50 && x_axis <= 50)
     {
        this->x_axis = x_axis;
     }
     else
     {
          x_axis = 0;
     }
     
}

void setY_axis(int y_axis)
{
     if (y_axis >= -50 && y_axis <= 50)
     {
        this->y_axis = y_axis;
     }

     else
     {
          y_axis = 0;
     }
}

void setRadius(float radius)
{
     if (radius >= 1.00 && radius <= 10.00)
     {
          this->radius = radius;
     }

     else
     {
          radius = 5.00;
     }
}


//Getters

const int getX_axis()
{
     return x_axis;
}

const int getY_axis()
{
     return y_axis;
}

const float getRadius()
{
     return radius;
}

const double getPi()
{
     return PI;
}

//Constructor and Destructor

Circle(int x_axis , int y_axis , float radius)
{
     setX_axis(x_axis);
     setY_axis(y_axis);
     setRadius(radius);
}

Circle(int x_axis , int y_axis)
{
     setX_axis(x_axis);
     setY_axis(y_axis);
     radius = 5.00;
}

Circle(int x_axis , float radius)
{
     setX_axis(x_axis);
     setRadius(radius);
     y_axis = 0;
}

Circle(const Circle&obj)
{
     x_axis = obj.x_axis;
     y_axis = obj.y_axis;
     radius = obj.radius;
}

Circle()
{
     x_axis = 0;
     y_axis = 0;
     radius = 5.00;
     cout << "Default constructor " <<endl;

}

~Circle()
{
     cout << "Destructor executed " <<endl;
}

//Member functions

void setCircle(int x_axis , int y_axis , float radius)
{
     setX_axis(x_axis);
     setY_axis(y_axis);
     setRadius(radius);
}

void getCircle()
{
     cout << "Enter X_axis: " <<endl;
     cin >>x_axis;

     cout << "Enter Y_axis: " <<endl;
     cin >>y_axis;

     cout << "Enter radius: " <<endl;
     cin >>radius;

     setX_axis(x_axis);
     setY_axis(y_axis);
     setRadius(radius);
}


void putCircle()
{

     cout << "The x_axis of circle is " << x_axis << endl;
     cout << "The y_axis of circle is " << y_axis << endl;
     cout << "The y_axis of circle is " << radius << endl;
}

float getArea() const
{
     return (PI * radius * radius);
}

float getDiameter() const
{
      return (radius * 2);
}

float getCircumference()  const  
{
      return (2 * PI * radius);
}

static Circle addCircle(const Circle &c1 , const Circle &c2)
{

     // return Circle(c1.x_axis + c2.x_axis , c1.y_axis + c2.y_axis , c1.radius + c2.radius);
}

static bool isEqual(const Circle &obj1 , const Circle &obj2)
{

     if (obj1.x_axis == obj2.x_axis && obj1.y_axis == obj2.y_axis && obj1.radius == obj2.radius)
     {
          return true;
     }

     return false;
}

int findCircle(const Circle arr[] , const int size)
{
     int index;
     bool flag = false;
     for (index = 0; index < size; index++)
     {
          if (this->x_axis == arr[index].x_axis && this->y_axis == arr[index].y_axis && this->radius == arr[index].radius )
          {
               flag = true;
               break;
          }
          
     }

     if (flag)
     {
          return index;   
     }
     else
     {
          index = -1;
     }

     return index;

}

void updateCircle(Circle arr[] , int size) const
{
     float r;
     for (int i = 0; i < size; i++)
     {
          if (this->x_axis == arr[i].x_axis && this->y_axis == arr[i].y_axis )
          {
               arr[i].radius = radius;
          }
          
     }
     
}

};


const double Circle::PI = 3.141593;  //static variable definition outside the class

int main()
{
                    
     //Objects are created for calculating area , diameter , circumference , adding and comparing of two objects of circle class

     Circle c1 , c2(2 , 2 , 3.3) , c3(2 , 2 , 3.3) , sum;

     //Array of objects are created for findCircle and updateCircle member function of circle class

     Circle arrOfCircle[4] = {Circle(2 , 2 , 5.5) , Circle(5 , 5 , 7.3) , Circle(2 , 2 , 3.3) , Circle(2 , 4 , 6.6)};

     c1.getCircle();

     sum = Circle::addCircle(c2 , c3);

     int ans = Circle::isEqual(c2 , c3);

     int index = c2.findCircle(arrOfCircle , 4);

     c2.updateCircle(arrOfCircle , 4);

     //Display all the data of circle class
     
     cout << "\n\nThe area of circle is " <<c1.getArea() << endl;
     cout << "The diameter of circle is " << c1.getDiameter() << endl;
     cout << "The circumference of circle is " << c1.getCircumference() << endl << endl;


     cout << "The sum of two objects is:" << endl << endl;
     sum.putCircle();

     if (ans)
     {
          cout << "\nObjects states are same " <<endl;
     }
     else
     {
          cout << "Objects states are not same " <<endl;
     }


     cout << "The objects is equal at " << index << " index to the left-hand-side objects " <<endl << endl;

     cout << "The updated radius of all those objects to radius of left-hand-side object which are having same coordinates" <<endl <<endl;
     

     for (int i = 0; i < 4; i++)
     {
          arrOfCircle[i].putCircle();
     }
     
     cout << endl;

     return 0;
}