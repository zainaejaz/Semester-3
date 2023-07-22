#include<iostream>
using namespace std;
#include<string>


class Ship
{
private:
    string name;
    string year;
public:
    Ship(string n = "", string y = "")
    {
        name = n;
        year = y;
    }

    void setName(string n)
    {
        name = n;
    }

    void setYear(string y)
    {
        year = y;
    }

    string getName()
    {
        return name;
    }

    string getYear()
    {
        return year;
    }

    virtual void print()
    {
        cout << "Ship's name " << name << endl;
        cout << "Ship's year " << year << endl;
    }


    virtual ~Ship() {}
};


class CruiseShip : public Ship
{
private:
    int maxNoOfPssnger;
public:
    CruiseShip(string n = "", string y = "", int p = 0) : Ship(n, y)
    {
        maxNoOfPssnger = p;
    }

    void setNoOfPssnger(int p)
    {
        maxNoOfPssnger = p;
    }

    int getNoOfPssnger()
    {
        return maxNoOfPssnger;
    }

    virtual void print()
    {
        Ship::print();
        cout << "Ship's maximum number of passengers are :" << maxNoOfPssnger << endl;
    }


    virtual ~CruiseShip() {}
};

class CargoShip : public Ship
{
private:
    int cargoCap;
public:
    CargoShip(string n = "", string y = "", int c = 0) : Ship(n, y)
    {
        cargoCap = c;
    }

    void setNoOfPssnger(int c)
    {
        cargoCap = c;
    }

    int getNoOfPssnger()
    {
        return cargoCap;
    }

    virtual void print()
    {
        Ship::print();
        cout << "Ship's cargo capacity are :" << cargoCap << endl;
    }


    virtual ~CargoShip() {}
};

class BattleShip : public Ship
{
private:
    int totalNoOfMissles;
public:
    BattleShip(string n = "", string y = "", int m = 0) : Ship(n, y)
    {
        totalNoOfMissles = m;
    }

    void setTotalNoOfMissles(int m)
    {
        totalNoOfMissles = m;
    }

    int getTotalNoOfMissles()
    {
        return totalNoOfMissles;
    }

    virtual void print()
    {
        cout << "Battle Ship's name: " << Ship::getName() << endl;
        cout << "Ship's missiles' capacity. are :" << totalNoOfMissles << endl;
    }


    virtual ~BattleShip() {}
};


int main()
{

    Ship* pa[4];

    pa[0] = new Ship("zaina", "april");
    pa[1] = new CargoShip("rida", "december", 8);
    pa[2] = new CruiseShip("mishi", "january", 6);
    pa[3] = new BattleShip("mishi", "january", 6);

    for (int i = 0; i < 3; i++)
    {
        pa[i]->print();
    }

    for (int i = 0; i < 4; i++) {
        delete pa[i];
    }
    return 0;
}
