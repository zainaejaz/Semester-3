

#include <iostream>
using namespace std;
#include<string>

class Account
{

protected:
	string firstName;
	string lastName;
	double currentBalance;

public:

	Account(string fName, string lName, double cBalance)
	{
		firstName = fName;
		lastName = lName;
		currentBalance = cBalance;
	}

	virtual string getAccType() const
	{
		return "Account";
	}

	virtual double debitTransaction(double debitAmount)
	{
		currentBalance = currentBalance - debitAmount;

		return currentBalance;
	}

	virtual double creditTransaction(double creditAmount)
	{
		currentBalance = currentBalance + creditAmount;
		return currentBalance;
	}

	void print()
	{
		cout << firstName << " " << lastName << "\t" << getAccType() << " \t " << currentBalance << endl;
	}
	virtual ~Account()
	{

	}


};

class CheckingAccount : public Account
{

protected:
	double minBalance = 100;
	double fee = 10;
	int transCount;

	void chargeFee()
	{
		
		
		currentBalance = currentBalance - fee;
		

	}

public:

	CheckingAccount(string fName, string lName, double cBalance) : Account(fName , lName , cBalance) , transCount(0)
	{
		
	}

	virtual string getAccType() const
	{
		return "CheckingAccount";
	}

	virtual double debitTransaction(double debitAmount) {

		double newBalance = Account::debitTransaction(debitAmount);
		transCount++;

		if (debitAmount < minBalance)
		{
			if (transCount <= 2)
			{
				chargeFee();

			}

		}
		else
		{
			return newBalance;
		}

		return newBalance;
	}

	virtual double creditTransaction(double creditAmount) {

		double newBalance = Account::creditTransaction(creditAmount);
		transCount++;

		if (creditAmount < minBalance)
		{
			chargeFee();

		}

		return newBalance;
	}


	virtual ~CheckingAccount()
	{

	}


};


class SavingAccount : public Account
{

protected:
	double interest;
	int transCount;

	void payInterest()
	{

		currentBalance = currentBalance + (currentBalance * 2 / 100);
	}

public:

	SavingAccount(string fName, string lName, double cBalance) : Account(fName, lName, cBalance), transCount(0) , interest(2)
	{

	}

	virtual string getAccType() const
	{
		return "SavingAccount";
	}

	virtual double debitTransaction(double debitAmount) {

		double newBalance = 0;
		transCount++;

		if (transCount <= 2)
		{
			
			newBalance = Account::debitTransaction(debitAmount);
			payInterest();


		}
		else
		{
			return newBalance;
		}

		return newBalance;
	}

	virtual double creditTransaction(double creditAmount) {

		double newBalance = 0;

		transCount++;


		if (transCount <= 2)
		{

			newBalance = Account::creditTransaction(creditAmount);
			payInterest();


		}
		else
		{
			return newBalance;
		}

		return newBalance;
	}


	virtual ~SavingAccount()
	{

	}


};

int main()
{

	//-----Checking account information-------//


	CheckingAccount acc1("saud", "yaseen", 200.00);

	acc1.debitTransaction(150); 
	acc1.print();
	acc1.debitTransaction(5); 
	acc1.print();
	acc1.creditTransaction(200);
	acc1.print();


	//-----Saving account information-------//


	SavingAccount a1("zaina", "ejaz", 1000.00);

	a1.debitTransaction(150.00);
	a1.print();

	a1.creditTransaction(200);
	a1.print();

	a1.debitTransaction(5.00);
	a1.print();
	return 0;
}


