#include<iostream>
using namespace std;
#include<string>

class Car
{
private:
    int yearModel;
    string make;
    int speed;
public:

    Car(int year , string name)
    {
        make = name;
        yearModel = year;
        speed = 0;
    }
    Car(const Car&o1)
    {
        yearModel = o1.yearModel;
        make = o1.make;
        speed = o1.speed;
    }

    ~Car()
    {
        cout << "Destructor executed" << endl;
    }

    void setCar(int year , string name, int s)
    {
        yearModel = year;
        make = name;
        speed = s;
    }
    void getCar()
    {
        int a = 5 , brake = 5;
        cout << "Enter car model:" <<endl;
        cin >> yearModel;
        cout << "Enter car name:" <<endl;
        cin >> make;
        cout << "Enter car speed:" <<endl;
        cin >> speed;

    }
    void putCar()
    {
        cout << "Year model\t" << "Make\t\t" << "Speed" <<endl;
        cout << yearModel <<"\t\t" << make << "\t\t" << speed <<endl;
    }
    void accelerate()
    {
        speed = speed + 5;
    }
    void brake()
    {
        speed = speed - 5;
    }

};

int main()
{
    Car obj1(2023 , "suzuki");
    Car obj2(obj1);
    Car obj3(obj1);
    Car obj4(obj1);
    Car obj5(obj1);


    obj1.setCar(2021 , "SUZUKI" , 40);
    obj1.getCar();
    obj1.accelerate();
    obj1.brake();

    obj2.setCar(2021 , "SUZUKI" , 40);
    obj2.getCar();
    obj2.accelerate();
    obj2.brake();

    obj3.setCar(2021 , "SUZUKI" , 40);
    obj3.getCar();
    obj3.accelerate();
    obj3.brake();

    obj4.setCar(2021 , "SUZUKI" , 40);
    obj4.getCar();
    obj4.accelerate();
    obj4.brake();

    obj5.setCar(2021 , "SUZUKI" , 40);
    obj5.getCar();
    obj5.accelerate();
    obj5.brake();

    obj1.putCar();
    obj2.putCar();
    obj3.putCar();
    obj4.putCar();
    obj5.putCar();
    
    return 0;
}