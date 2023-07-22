

#include <iostream>
using namespace std;
#include<string>

class Employee
{
private:
	string firstName;
	string lastName;
	int SSN;
public:

	Employee(string fName, string lName, int ssn)
	{
		this->firstName = fName;
		this->lastName = lName;
		this->SSN = ssn;
	}

	//getter

	string getFirstName()
	{
		return firstName;
	}

	string getLastName()
	{
		return lastName;
	}

	int getSSN()
	{
		return SSN;
	}

	//setter

	void setFirstName(string fn)
	{
		this->firstName = fn;
	}

	void setLastName(string ln)
	{
		this->lastName = ln;
	}

	void setSSN(int ssn)
	{
		this->SSN = ssn;
	}

	virtual void print()
	{
		cout << "\nThe first name of employee is " << firstName << endl;
		cout << "\nThe last name of employee is " << lastName << endl;
		cout << "\nThe SSN of employee is " << SSN << endl;
	}

	virtual double earning() = 0;
	virtual ~Employee()
	{

	}


};


class SalariedEmployee : public Employee
{
private:
	double weeklySalary;
public:

	SalariedEmployee(string fName = NULL, string lName = NULL, int ssn = 0, double ws = 0) : Employee(fName, lName, ssn)
	{
		this->weeklySalary = ws;
	}

	//getter

	double getWeeklySalary()
	{
		return weeklySalary;
	}

	//setter

	void setSSN(double wSalary)
	{
		this->weeklySalary = wSalary;
	}

	virtual void print()
	{
		Employee::print();
		cout << "\nThe weekly salary of employee is " << weeklySalary << endl;
	}

	virtual double earning()
	{
		return weeklySalary;
	}

	virtual ~SalariedEmployee()
	{

	}


};

class hourlyEmployee : public Employee
{
private:
	double wage;
	double hours;
public:

	hourlyEmployee(string fName = "", string lName = "", int ssn = 0, double w = 0, double h = 0) : Employee(fName, lName, ssn)
	{
		this->wage = w;
		this->hours = h;
	}

	//getter

	double getWages()
	{
		return wage;
	}

	double getHour()
	{
		return hours;
	}

	//setter

	void setWages(double w)
	{
		this->wage = w;;
	}

	void setHour(double h)
	{
		this->hours = h;
	}

	virtual void print()
	{
		Employee::print();
		cout << "\nThe wages of employee is " << wage << endl;
		cout << "\nThe hours of employee is " << hours << endl;
	}

	virtual double earning()
	{
		return hours * wage;
	}

	virtual ~hourlyEmployee()
	{

	}


};

class CommissionEmployee : public Employee
{
private:
	double grossSale;
	double commmissionRate;
public:

	CommissionEmployee(string fName = "", string lName = "", int ssn = 0, double gs = 0, double cr = 0) : Employee(fName, lName, ssn)
	{
		this->grossSale = gs;
		this->commmissionRate = cr;
	}

	//getter

	double getGrossSale()
	{
		return grossSale;
	}

	double getCommmissionRate()
	{
		commmissionRate;
	}

	//setter

	void setGrossSale(double gs)
	{
		this->grossSale = gs;;
	}

	void setCommmissionRate(double  cr)
	{
		this->commmissionRate = cr;
	}

	virtual void print()
	{
		Employee::print();
		cout << "\nThe grossSale of employee is " << grossSale << endl;
		cout << "\nThe commisionRate of employee is " << commmissionRate << endl;
	}

	virtual double earning()
	{
		return grossSale * commmissionRate;
	}


	virtual ~CommissionEmployee()
	{

	}

};

class BasePlusCommissionEmployee : public CommissionEmployee
{
private:
	double baseSalary;
public:

	BasePlusCommissionEmployee(string fName = "", string lName = "", int ssn = 0, double gs = 0, double cr = 0, double bs = 0) : CommissionEmployee(fName, lName, ssn, gs, cr)
	{
		this->baseSalary = bs;
	}

	//getter

	double getBaseSalary()
	{
		return baseSalary;
	}

	//setter

	void setBaseSalary(double bs)
	{
		this->baseSalary = bs;;
	}

	virtual void print()
	{
		Employee::print();
		CommissionEmployee::print();
		cout << "\nThe baseSalary of employee is " << baseSalary << endl;
	}

	virtual double earning()
	{
		return CommissionEmployee::earning() + baseSalary;
	}

	virtual ~BasePlusCommissionEmployee()
	{

	}


};


int main()
{
	SalariedEmployee e1("zaina", "ejaz", 42, 20000);


	cout << "The salaried employee information are:" << endl;
	e1.print();

	cout << "The hourly employee information are:" << endl << endl;
	hourlyEmployee e2("rida", "ejaz", 43, 30.5, 12.4);

	e2.print();

	cout << "\nThe commission employee information are:" << endl << endl;

	CommissionEmployee e3("mishi", "ejaz", 44, 45.2, 12.7);

	e3.print();

	cout << "\nThe basePlusCommission employee information are:" << endl << endl;
	BasePlusCommissionEmployee e4("samina", "ejaz", 44, 55.2, 14.7);

	e4.print();

	Employee* eptr[4];

	eptr[0] = &e1;
	eptr[1] = &e2;
	eptr[2] = &e3;
	eptr[3] = &e4;

	cout << "\nThe employee information are by using pointer notation : \n\n";
	for (int i = 0; i < 4; ++i)
	{
		eptr[i]->print();
		eptr[i]->earning();


	}


	return 0;
}

}
