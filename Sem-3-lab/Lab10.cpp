#include<iostream>
using namespace std;


#include "iostream"

using namespace std;

class FeetInches
{
private:
	int feet;			// To hold a number of feet
	int inches;			// To hold a number of inches

	void simplify()
	{
		if (inches >= 12)
		{
			feet += (inches / 12);
			inches = inches % 12;
		}
		else if (inches < 0)
		{
			feet -= ((abs(inches) / 12) + 1);
			inches = 12 - (abs(inches) % 12);
		}
	}

public:
	// Constructor
	FeetInches(int f = 0, int i = 0)
	{
		feet = f;
		inches = i;
		simplify();
	}

	FeetInches(const FeetInches& right)
	{
		feet = right.feet;
		inches = right.inches;
		simplify();
	}

	// Mutator functions
	void setFeet(int f)
	{
		feet = f;
	}

	void setInches(int i)
	{
		inches = i;
		simplify();
	}

	// Accessor functions
	int getFeet() const
	{
		return feet;
	}

	int getInches() const
	{
		return inches;
	}


	FeetInches operator + (const FeetInches& right)
	{
		FeetInches temp;

		temp.inches = inches + right.inches;
		temp.feet = feet + right.feet;
		temp.simplify();

		return temp;
	}

	FeetInches operator - (const FeetInches& right)
	{
		FeetInches temp;

		temp.inches = inches - right.inches;
		temp.feet = feet - right.feet;
		temp.simplify();

		return temp;
	}

	FeetInches operator * (const FeetInches& right)
	{
		FeetInches temp;

		temp.inches = inches * right.inches;
		temp.feet = feet * right.feet;
		temp.simplify();

		return temp;
	}

	FeetInches operator ++ ()
	{
		++inches;
		simplify();

		return *this;
	}

	FeetInches operator ++ (int)
	{
		FeetInches temp(feet, inches);

		inches++;
		simplify();

		return temp;
	}

	FeetInches operator -- ()
	{
		--inches;
		simplify();

		return *this;
	}

	FeetInches operator -- (int)
	{
		FeetInches temp(feet, inches);

		inches--;
		simplify();

		return temp;
	}

	bool operator > (const FeetInches& right)
	{
		bool status;

		if (feet > right.feet)
			status = true;
		else if (feet == right.feet && inches > right.inches)
			status = true;
		else
			status = false;

		return status;
	}

	bool operator < (const FeetInches& right)
	{
		return !(*this > right);
	}

	bool operator >= (const FeetInches& right)
	{
		bool status;

		if (feet >= right.feet)
			status = true;
		else if (feet == right.feet && inches >= right.inches)
			status = true;
		else
			status = false;

		return status;
	}

	bool operator <= (const FeetInches& right)
	{
		return !(*this >= right);
	}

	bool operator == (const FeetInches& right)
	{
		bool status;

		if (feet == right.feet && inches == right.inches)
			status = true;
		else
			status = false;

		return status;
	}

	bool operator != (const FeetInches& right)
	{
		return !(*this == right);
	}

	friend ostream& operator << (ostream&, const FeetInches&);
	friend istream& operator >> (istream&, FeetInches&);
};

ostream& operator << (ostream& out, const FeetInches& obj)
{
	out << "Feet = " << obj.feet << "\tInches = " << obj.inches << endl;

	return out;
}

istream& operator >> (istream& in, FeetInches& obj)
{
	cout << "Enter Feet:\t";
	in >> obj.feet;

	cout << "Enter Inches:\t";
	in >> obj.inches;

	return in;
}


class RoomDimension
{
	FeetInches length;
	 
	FeetInches width;

public:

	void setLength(FeetInches len)
	{
	
		this->length = len;
	}

	void setWidth(FeetInches wid)
	{

		this->width = wid;
	}	
	
	FeetInches getLength()
	{
		return length;
	}
	
	FeetInches getWidth()
	{
		return width;
	}

	RoomDimension(FeetInches l , FeetInches w) : length(l) , width(w)
	{
		
	}

	FeetInches area()
	{
		FeetInches  a;
		a = length * width;

		return a;

	}

	void print()
	{
		cout << "Length: " << length << endl;
		cout << "Width: " << width<< endl;
	}




};


class RoomCarpet
{
	RoomDimension roomSize;

	float costPerSquareFoot;

public:


	void setRoomSize(RoomDimension roomSize )
	{
		this->roomSize = roomSize;

	}

	void setcostPerSquareFoot(float costPerSquareFoot)
	{
		this->costPerSquareFoot = costPerSquareFoot;
	}

	RoomDimension getRoomSize()
	{
		return roomSize;
	}

	float getcostPerSquareFoo()
	{
		return costPerSquareFoot;
	}

	RoomCarpet(RoomDimension roomSize , float costPerSquareFoot) : roomSize(roomSize)
	{
		this->costPerSquareFoot = costPerSquareFoot;
	}

	float totalCost()
	{
		
		return (roomSize.area().getFeet() * costPerSquareFoot);

	}

	void print()

	{
		cout << "roomSize : " << roomSize.print() << endl;
		cout << "costPerSquareFoot : " << costPerSquareFoot << endl;
	}

};




#include "iostream"

using namespace std;

class FeetInches
{
private:
	int feet;			// To hold a number of feet
	int inches;			// To hold a number of inches

	void simplify()
	{
		if (inches >= 12)
		{
			feet += (inches / 12);
			inches = inches % 12;
		}
		else if (inches < 0)
		{
			feet -= ((abs(inches) / 12) + 1);
			inches = 12 - (abs(inches) % 12);
		}
	}

public:
	// Constructor
	FeetInches(int f = 0, int i = 0)
	{
		feet = f;
		inches = i;
		simplify();
	}

	FeetInches(const FeetInches& right)
	{
		feet = right.feet;
		inches = right.inches;
		simplify();
	}

	// Mutator functions
	void setFeet(int f)
	{
		feet = f;
	}

	void setInches(int i)
	{
		inches = i;
		simplify();
	}

	// Accessor functions
	int getFeet() const
	{
		return feet;
	}

	int getInches() const
	{
		return inches;
	}

	FeetInches operator + (const FeetInches& right)
	{
		FeetInches temp;

		temp.inches = inches + right.inches;
		temp.feet = feet + right.feet;
		temp.simplify();

		return temp;
	}

	FeetInches operator - (const FeetInches& right)
	{
		FeetInches temp;

		temp.inches = inches - right.inches;
		temp.feet = feet - right.feet;
		temp.simplify();

		return temp;
	}

	FeetInches operator * (const FeetInches& right)
	{
		FeetInches temp;

		temp.inches = inches * right.inches;
		temp.feet = feet * right.feet;
		temp.simplify();

		return temp;
	}

	FeetInches operator ++ ()
	{
		++inches;
		simplify();

		return *this;
	}

	FeetInches operator ++ (int)
	{
		FeetInches temp(feet, inches);

		inches++;
		simplify();

		return temp;
	}

	FeetInches operator -- ()
	{
		--inches;
		simplify();

		return *this;
	}

	FeetInches operator -- (int)
	{
		FeetInches temp(feet, inches);

		inches--;
		simplify();

		return temp;
	}

	bool operator > (const FeetInches& right)
	{
		bool status;

		if (feet > right.feet)
			status = true;
		else if (feet == right.feet && inches > right.inches)
			status = true;
		else
			status = false;

		return status;
	}

	bool operator < (const FeetInches& right)
	{
		return !(*this > right);
	}

	bool operator >= (const FeetInches& right)
	{
		bool status;

		if (feet >= right.feet)
			status = true;
		else if (feet == right.feet && inches >= right.inches)
			status = true;
		else
			status = false;

		return status;
	}

	bool operator <= (const FeetInches& right)
	{
		return !(*this >= right);
	}

	bool operator == (const FeetInches& right)
	{
		bool status;

		if (feet == right.feet && inches == right.inches)
			status = true;
		else
			status = false;

		return status;
	}

	bool operator != (const FeetInches& right)
	{
		return !(*this == right);
	}

	friend ostream& operator << (ostream&, const FeetInches&);
	friend istream& operator >> (istream&, FeetInches&);
};

ostream& operator << (ostream& out, const FeetInches& obj)
{
	out << "Feet = " << obj.feet << "\tInches = " << obj.inches << endl;

	return out;
}

istream& operator >> (istream& in, FeetInches& obj)
{
	cout << "Enter Feet:\t";
	in >> obj.feet;

	cout << "Enter Inches:\t";
	in >> obj.inches;

	return in;
}

class RoomDiemnesion
{
	FeetInches lenght;
	FeetInches width;

public:

	//Constructor 
	RoomDiemnesion(FeetInches l, FeetInches w) : lenght(l), width(w)
	{

	}

	//Setters
	void setLenght(FeetInches l)
	{
		lenght = l;
	}

	void setWidth(FeetInches w)
	{
		width = w;
	}

	//Getters
	FeetInches getLen() const
	{
		return lenght;
	}

	FeetInches getWidth() const
	{
		return width;
	}

	FeetInches Area()
	{
		FeetInches area = lenght * width;
		return area;
	}

	void display()
	{
		cout << "Length = " << lenght << endl;
		cout << "Width = " << width << endl;
	}



};

class RoomCarpet
{
	RoomDiemnesion roomSize;
	float  costPerSquareFoot;

public:

	void setRoomSize(RoomDiemnesion r)
	{
		roomSize = r;
	}

	void setCost(float f)
	{
		costPerSquareFoot = f;
	}

	RoomDiemnesion getRoomSize() const
	{
		return roomSize;
	}

	float getCost() const
	{
		return costPerSquareFoot;
	}

	RoomCarpet(RoomDiemnesion r, float f) : roomSize(r), costPerSquareFoot(f)
	{

	}

	float totalCost()
	{
		return (costPerSquareFoot * roomSize.getLen().getFeet() * roomSize.getWidth().getFeet());

	}

	void display()
	{
		roomSize.display();
		cout << " And Cost Per Square Foot " << costPerSquareFoot << endl;

	}
};

int main()
{
	FeetInches fI1(10, 5);
	FeetInches fI2(20, 8);

	RoomDiemnesion D1(fI1, fI2);


	return 0;
}