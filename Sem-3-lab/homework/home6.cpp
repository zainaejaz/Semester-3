//#include <iostream>
//#include <string>
//using namespace std;
//
//class NumDays
//{
//private:
//    int numOFhrs;
//    double numOFdays;
//
//public:
//    NumDays(int numOFhrs) : numOFhrs(numOFhrs)
//    {
//        numOFdays = numOFhrs / 8.00;
//    }
//    void setHours(int numOFhrs)
//    {
//        this->numOFhrs = numOFhrs;
//        numOFdays = numOFhrs / 8.0;
//    }
//    void setDays(double numOFdays)
//    {
//        this->numOFdays = numOFdays;
//        numOFhrs = numOFdays * 8;
//    }
//    double getDays() const
//    {
//        return numOFdays;
//    }
//    int getHours() const
//    {
//        return numOFhrs;
//    }
//    NumDays operator+(const NumDays& obj)
//    {
//        return NumDays(numOFhrs + obj.numOFhrs);
//    }
//    NumDays operator-(const NumDays& obj)
//    {
//        return NumDays(numOFhrs - obj.numOFhrs);
//    }
//    NumDays operator++()
//    {
//        ++numOFhrs;
//        setHours(numOFhrs);
//        return *this;
//    }
//    NumDays operator++(int)
//    {
//        NumDays temp(*this);
//        numOFhrs++;
//        setHours(numOFhrs);
//        return *this;
//    }
//    NumDays operator--()
//    {
//        --numOFhrs;
//        setHours(numOFhrs);
//        return *this;
//    }
//    NumDays operator--(int)
//    {
//        NumDays temp(*this);
//        numOFhrs--;
//        setHours(numOFhrs);
//        return *this;
//    }
//
//    void putData()
//    {
//        cout << "Num of Hrs : " << numOFhrs << "\n";
//        cout << "Num of days : " << numOFdays << "\n";
//    }
//};
//
//class TimeOff
//{
//private:
//    NumDays maxSickDays;
//    NumDays sickTaken;
//    NumDays maxVacation;
//    NumDays vacTaken;
//    NumDays maxUnpaid;
//    NumDays unpaidTaken;
//
//    string employeeName;
//    int idNumber;
//
//public:
//    TimeOff(string employeeName, int idNumber, int maxSickHours, int takenSickHours, int maxVacHours, int takenVacHours, int maxUnpidHours , int takenUnpaidHours) : maxSickDays(maxSickHours), sickTaken(takenSickHours), maxVacation(maxVacHours), vacTaken(takenVacHours), maxUnpaid(maxUnpidHours) , unpaidTaken(takenUnpaidHours)
//    {
//        this->employeeName = employeeName;
//        this->idNumber = idNumber;
//        setMaxVacation(maxVacHours);
//    }
//
//    void setEmployeeName(string employeeName)
//    {
//        this->employeeName = employeeName;
//    }
//    void setIdNumber(int idNumber)
//    {
//        this->idNumber = idNumber;
//    }
//    void setMaxSickDays(int maxSickHours)
//    {
//        maxSickDays.setHours(maxSickHours);
//    }
//    void setSickTaken(int takenSickHours)
//    {
//        sickTaken.setHours(takenSickHours);
//    }
//    void setMaxVacation(int maxVacHours)
//    {
//        if (maxVacHours > 240)
//            maxVacHours = 240;
//        maxVacation.setHours(maxVacHours);
//    }
//    void setVacTaken(int takenVacHours)
//    {
//        vacTaken.setHours(takenVacHours);
//    }
//    void setMaxUnpaid(int maxUnpidHours)
//    {
//        maxUnpaid.setHours(maxUnpidHours);
//    }
//    void setUnpaidTaken(int takenUnpaidHours)
//    {
//        unpaidTaken.setHours(takenUnpaidHours);
//    }
//
//    string getEmployeeName() const
//    {
//        return employeeName;
//    }
//    int getIdNumber() const
//    {
//        return idNumber;
//    }
//    double getMaxSickDays() const
//    {
//        return maxSickDays.getDays();
//    }
//    double getSickTaken() const
//    {
//        return sickTaken.getDays();
//    }
//    double getMaxVacation() const
//    {
//        return maxVacation.getDays();
//    }
//    double getVacTaken() const
//    {
//        return vacTaken.getDays();
//    }
//    double getMaxUnpaid() const
//    {
//        return maxUnpaid.getDays();
//    }
//    double getUnpaidTaken() const
//    {
//        return unpaidTaken.getDays();
//    }
//};
//
//int main()
//{
//    cout << "Enter the number of months an employee has worked for the company ";
//    int months;
//    cin >> months;
//
//    TimeOff obj("Muhib Arshad", 40, 8 * months, 20, 12 * months, 15, 30, 12);
//
//    cout << "Maximum number of sick days:" << obj.getMaxSickDays() << " days" "\n";
//    cout << "Maximum number of vacation days:" << obj.getMaxVacation() << " days" "\n";
//
//    return 0;
//}

#include "iostream"

using namespace std;

class A
{
	int dA;

public:

A()
{
	dA = 0;
	cout << "A's Default Constructor." << endl;
}

A(int dA)
{
	this->dA = dA;
	cout << "A's Parameterized Constructor." << endl;
}

A(const A& obj)
{
	dA = obj.dA;
	cout << "A's Copy Constructor." << endl;
}

virtual ~A()		//Always make base class destructor virual, to avoid memmory leaks.
{
	cout << "A's Destructor." << endl;
}

virtual void print()	//print() would be overriden in child classe(s).
{
	cout << "dA = " << dA << endl;
}

virtual void test()		//test() would be overriden in child classe(s).
{
	cout << "Class A's Test" << endl;
}
};

class B : public A		//B inherits all the features of A except Constructors, Destructor, Assignment-operator and V-Table
{

int dB;

public:
	B()
	{
		dB = 0;
		cout << "B's Default Constructor." << endl;
	}

	B(int dA, int dB) : A(dA)	//calling A's parameterized constructor
	{
		this->dB = dB;
		cout << "B's Parameterized Constructor." << endl;
	}

	B(const B& obj) : A(obj)	//calling A's copy constructor. The object of child class can be assigned to its parent.
	{
		dB = obj.dB;
		cout << "B's Copy Constructor." << endl;
	}

	~B()						//B's destructor is also virtual
	{
		cout << "B's Destructor." << endl;
	}

	void print()		//overriden function. print() is also virtual here
	{
		A::print();		//making a call to A(parent) class' print member function
		cout << "dB = " << dB << endl;
	}

	void test()		//overriden function. test() is also virtual here
	{
		cout << "Class B's Test" << endl;
	}
};

class C : public A		//C inherits all the features of A except Constructors, Destructor, Assignment-operator and V-Table
{
	int dC;

public:
	C()
	{
		dC = 0;
		cout << "C's Default Constructor." << endl;
	}

	C(int dA, int dC) : A(dA)	//calling A's parameterized constructor
	{
		this->dC = dC;
		cout << "C's Parameterized Constructor." << endl;
	}

	C(const C& obj) : A(obj)	//calling A's copy constructor. The object of child class can be assigned to its parent.
	{
		dC = obj.dC;
		cout << "C's Copy Constructor." << endl;
	}

~C()				//C's destructor is also virtual
{
	cout << "C's Destructor." << endl;
}

void print()		//overriden function. print() is also virtual here
{
	A::print();		//making a call to A(parent) class' print member function
	cout << "dC = " << dC << endl;
}

void test()		//overriden function. test() is also virtual here
{
	cout << "Class C's Test" << endl;
}
};

int main()
{
	A oa(1);
	B ob(2, 3);
	C oc(4, 5);

	A* pa[3] = { &oa, &ob, &oc };	//pointer of base-class can hold reference of child class

	for (int i = 0; i < 3; i++)
	{
		pa[i]->test();				//decision will be made on run-time based on object-type, not on pointer's type.
	}


	A* p = new B(1, 2);

	delete p;	//Destructor of class B followed by class A will be executed. Because the base clas (A)'s destructor was made virtual


	return 0;
}