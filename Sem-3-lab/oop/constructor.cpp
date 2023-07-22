// #include<iostream>
// using namespace std;

// class Algebra
// {
// private:
//     int a;
//     int b;
// public:
//     // Algebra()
//     // {
//     //     a = 0;
//     //     b = 0;
//     // }
//     // Algebra(int a1 , int b1 )
//     // {
//     //     a = a1;
//     //     b = b1;
//     // }
//     void input();
//     void print();

// };
// void Algebra::input()
// {
//      cout << "Enter a:" <<endl;
//      cin >> a;
//      cout << "Enter b:" <<endl;
//      cin >> b;
// }


// void Algebra::print()
// {
//     cout << a <<endl;
//     cout << b <<endl;
// }

// int main()
// {
//     Algebra obj1;
//     obj1.input();
//     obj1.print();
//     return 0;
// }

                            //copy constructor

// #include<iostream>
// using namespace std;

// class Algebra
// {
// private:
//     int a;
//     int b;
// public:
// Algebra(int a1 , int a2)
// {
//      a = a1;
//      b = a2;
// }
//     Algebra(const Algebra& o1 )
//     {
//         a = o1.a;
//         b = o1.b;
//     }
// void print()
// {
//     cout << a <<endl;
//     cout << b <<endl;
// }
    
// };

// int main()
// {
//     Algebra obj1(5 , 6);
//     Algebra &obj2 = obj1;
//     cout<<"Para constructor:" <<endl;
//     obj1.print();
//     cout<<"copy constructor:" <<endl;
//     obj2.print();
//     return 0;
// }

// #include "iostream"
// using namespace std;

// class Car
// {
// public:
// 	/* Constructors */
// 	/*Car()
// 	{
// 		yearModel = 0;
// 		make = "name";
// 		speed = 0;
// 		cout << "Default constructor" << endl;
// 	}*/

// 	Car(int year, string name)
// 	{
// 		setYearModel(year);
// 		make = name;
// 		speed = 0;
// 		cout << "partametrized Constructor" << endl;
// 	}

// 	Car(Car &objTemp)
// 	{
// 		yearModel = objTemp.yearModel;
// 		make = objTemp.make;
// 		speed = objTemp.speed;

// 		cout << "Copy Constructor" << endl;
// 	}

// 	/* Destructor */

// 	~Car()
// 	{
// 		cout << "Dectructor Runs!" << endl;
// 	}


// 	/* Acessor GET functions */

// 	int getYearModel()
// 	{
// 		return yearModel;
// 	}

// 	string getMake()
// 	{
// 		return make;
// 	}

// 	int getSpeed()
// 	{
// 		return speed;
// 	}

// 	/*  Acessor SET functions */

// 	void setYearModel(int year)
// 	{
// 		if (year > 0)
// 			yearModel = year;
// 		else
// 			yearModel = 0;
// 	}

// 	void setMake(string name)
// 	{
// 		make = name;
// 	}

// 	void setSpeed(int spd)
// 	{
// 		if (spd > 0)
// 			speed = spd;
// 		else
// 			speed = 0;
// 	}

// 	/*  Member functions */

// 	void setCar(int yearModel, string name, int speed)
// 	{
// 		setYearModel(yearModel);
// 		setMake(name);
// 		setSpeed(speed);
// 	}

// 	void getCar()
// 	{

// 		cout << "ENter the Model of car: ";
// 		cin >> yearModel;
// 		setYearModel(yearModel);

// 		cout << "ENter the make of car: ";
// 		cin >> make;
// 		setMake(make);
		
// 		cout << "ENter the Speed of car: ";
// 		cin >> speed;
// 		setSpeed(speed);

// 	}

// 	void putCar()
// 	{

// 		cout << yearModel << "\t\t";
// 		cout << make << "\t\t";
// 		cout << speed << endl;
	
// 	}

// 	void accelerate()
// 	{
// 		speed = speed + 5;
// 	}

// 	void brake()
// 	{
// 		speed = speed - 5;
// 	}

// private:

// 	int yearModel;
// 	string make;
// 	int speed;

// };



// int main()
// {
// 	Car obj1(2021, "Suzuki");
// 	obj1.setSpeed(40);

// 	Car obj2 = obj1;

// 	obj2.putCar();

// 	obj2.getCar();

// 	Car obj3(2021, "Suzuki");
// 	obj3.setYearModel(2011);
// 	obj3.setMake("Honda");
// 	obj3.setSpeed(80);

// 	Car obj4(2021, "Suzuki");
// 	obj4.setCar(2012, "Toyta", 55);
// 	obj4.accelerate();

// 	Car obj5(2021, "Suzuki");
// 	obj5.setCar(2018, "Diahatsu Boon", 60);
// 	obj5.brake();



// 	cout << "\n\n\n";
// 	cout << "Year model" << "\t\tMake" << "\t\tSpeed\n\n";
// 	obj1.putCar();
// 	obj2.putCar();
// 	obj3.putCar();
// 	obj4.putCar();
// 	obj5.putCar();

// 	return 0;
// }


// #include<iostream>
// using namespace std;


// class algebra
// {
// private:
// 	int x;
// 	int y ;
// public: 
// 	algebra(int a , int b)
// 	{
// 		setX(a);
// 		setY(b);
// 	}
// 	void setX(int a)
// 	{
// 		x = a;
// 	}                  
// 	void setY(int b)
// 	{
// 		y = b;
// 	}
// 	void print()
// 	{
// 		cout << x <<endl;
// 		cout << y <<endl;
// 	}

// }; 

// int main()
// {
// 	algebra obj(5 , 8);
// 	obj.print();

// 	return 0;
// }


#include<iostream>
using namespace std;

class Zaina
{
private:
   int x;
   int y;
public:
    Zaina(int a , int b)
    {
        setA(a);
        
    }

    void setA(int a) 
    {
        if (a > 0)
        {
            x = a;
        }
        else
        x = 0;
    }
    int getA()
    {
        return x;
    }
    int getB()
    {
        return y;
    }


};

int main()
{
   
    Zaina obj(-5 , 8);

    cout << obj.getA() <<endl;
    cout << obj.getB() <<endl;

    return 0;
}

