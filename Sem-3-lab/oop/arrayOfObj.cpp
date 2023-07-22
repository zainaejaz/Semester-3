
// #include<iostream>
// using namespace std;

// class Algebra
// {
// private:
//     int sal;
// public:
//     Algebra(int x)
//     {
//         setA(x);
//         cout <<"Parameter constructor " <<endl;
//     }
//     Algebra()
//     {
//         sal = 0; 
//         cout << "Default constructor " <<endl;
//     }
//     ~Algebra()
//     {
//         cout << "destructor " <<endl;
//     }
//     void setA(int x)
//     {
//         sal = x;
//     }
//     void getArr()
//     {
        
//         cin >> sal;
//         setA(sal); 
//     }
//     void sumArr(Algebra arr[] , int s)
//     {

//         int sum = 0 , i;
//         for (i = 0; i < s; i++)
//         {
//             sum = sum + arr[i].sal; 
//         }
//         cout << "The total salary of employee " << i << " is:" << endl;
//         cout << sum << endl;
        
//     }
// };

// int main()
// {

//     Algebra emp[3] , res;

//     for (int i = 0; i < 3; i++)
//     {  
//         emp[i].getArr(); 
//     }

//     res.sumArr(emp , 3);

//     return 0;
// }


// #include "iostream"

// using namespace std;

// class Algebra
// {
// 	//data members of the class
// 	int a, b;
	
// public:

// 	//Default Constructor
// 	Algebra()
// 	{
// 		cout << "Default Constructor" << endl;

// 		a = b = 0;
// 	}

// 	//Parameterized Constructor
// 	Algebra(int a1, int b1)
// 	{
// 		cout << "Parameterized Constructor" << endl;

// 		setA(a1);
// 		setB(b1);
// 	}

// 	//Copy Constructor
// 	Algebra(const Algebra& obj)
// 	{
// 		cout << "Copy Constructor" << endl;

// 		a = obj.a;
// 		b = obj.b;
// 	}

// 	//Destructor
// 	~Algebra()
// 	{
// 		cout << "Desstructor" << endl;
// 	}

// 	//setter for data memeber a
// 	void setA(int a1)
// 	{
// 		if (a1 > 0)
// 			a = a1;
// 		else
// 			a = 0;
// 	}

// 	//getter for data memeber a
// 	int getA()
// 	{
// 		return a;
// 	}

// 	//setter for data memeber b
// 	void setB(int b1)
// 	{
// 		if (b1 > 0)
// 			b = b1;
// 		else
// 			b = 0;
// 	}

// 	//getter for data memeber b
// 	int getB()
// 	{
// 		return b;
// 	}

// 	//function to set object's data
// 	void setData(int a1, int b1)
// 	{
// 		setA(a1);
// 		setB(b1);
// 	}

// 	//function to take input for object's data
// 	void input()
// 	{
// 		cout << "Enter a = ";
// 		cin >> a;

// 		cout << "Enter b = ";
// 		cin >> b;

// 		setA(a);
// 		setB(b);
// 	}

// 	//function to display object's data on screen
// 	void print()
// 	{
// 		cout << "a = " << a << "\tb = " << b << endl;
// 	}

// 	void arraySum(Algebra ar[], const int size)
// 	{
// 	   int sum=0;
//     for(int i=0;i<size;i++)
//     {
//         a = a + ar[i].a;
//         b = b + ar[i].b;
//     }
//        cout<<" sum of a="<<a<<"sum of b ="<<b<<endl;
// 	}
// };

// int main()
// {

// 	Algebra ar[5];
    
// 	//setting ar's data
// 	for (int i = 0; i < 5; i++)
// 		ar[i].setData(i, i + 1);

// 	//printing ar's data
// 	for (int i = 0; i < 5; i++)
// 	ar[i].print();

//     ar[0].arraySum(ar,5);

// 	return 0;
// }


#include<iostream>
using namespace std;
class Compare
{
private:
	int x;
	static int count;
public:
 Compare()
 {
		cout << "Parmetried constructor:"<<endl;
 }
	 ~Compare()
	 {
		cout <<"Destructor:"<<endl;
	 } 

	 void input()
	 {
		cout << "Enter element of array" <<  count <<endl;
		cin >>x;
	 }

	 static void Count()
	 {
		count++;
	 }

	 void print()
	 {
	
		cout << x << endl; 
	 }

	 static bool compareArr(Compare arr1[] , int size1 , Compare arr2[] , int size2)
	 {
		for (int i = 0; i < size1; i++)
		{
			if (arr1[i].x != arr2[i].x)
			{
				return false;
			}
		}

		return true;
	 }

};

int Compare::count = 1;

int main()
{
	 Compare arr1[3] , arr2[3];
	int i = 0;
	for (int i = 0; i < 3; i++)
	{
		arr1[i].input();
	}

	cout << "The array " <<  i + 1<< endl;
	i++;
	for (int i = 0; i < 3; i++)
	{
		arr1[i].print();
	}
	
	Compare::Count();
	for (int i = 0; i < 3; i++)
	{
		arr2[i].input();
	}

	cout << "The array " <<  i + 1<< endl;
	for (int i = 0; i < 3; i++)
	{
		arr2[i].print();
	}

	int res = Compare::compareArr(arr1 , 3 , arr2 , 3);

	if (res)
	{
		cout << "array are equal"<<endl;
	}

	else
	{
		cout << "array are not equal"<<endl;
	}
	
	return 0;
}



#include <iostream>
#include "string"
#include<cmath>
using namespace std;

class Cuboids
{
								// Part 1: Data Members
	float height;
	float width;
	float depth;

public:
								// Part 2: Setters

	void setHeight(float h)
	{
		if (h > 0 && h < 35.00)
		{
			height = h;
		}
		else
		{
			h = 1;
		}
	}

	void setWidth(float w)
	{
		if (w > 0 && w < 35.00)
		{
			width = w;
		}
		else
		{
			w = 1;
		}
	}

	void setDepth(float d)
	{
		if (d > 0 && d < 35.00)
		{
			depth = d;
		}
		else
		{
			d = 1;
		}
	}

								// Part 3: Getters

	float getHeight()
	{
		return height;
	}

	float getWidth()
	{
		return width;
	}

	float getDepth()
	{
		return depth;
	}

							// Part 4: Constructor and Destructor

	Cuboids(float h, float w, float d)
	{
		setHeight(h);
		setWidth(w);
		setDepth(d);

		cout << "Parameterized Constructor 1" << endl;
	}

	Cuboids(float h, float w)
	{
		setHeight(h);
		setWidth(w);
		depth = 1;

		cout << "Parameterized Constructor 2" << endl;
	}

	Cuboids()
	{
		height = 1;
		width = 1;
		depth = 1;

		cout << "Default Constructor" << endl;
	}

	Cuboids(const Cuboids& c)
	{
		height = c.height;
		width = c.width;
		depth = c.depth;

		cout << "Copy Constructor" << endl;
	}

	~Cuboids()
	{
		cout << "Destructor Executed..." << endl;
	}

								// Part 5: Member Functions

	void setCuboids(float h, float w, float d)
	{
		setHeight(h);
		setWidth(w);
		setDepth(d);
	}

	void getCuboids()
	{
		cout << "Enter Height: ";
		cin >> height;
		setHeight(height);

		cout << "Enter Width: ";
		cin >> width;
		setWidth(width);

		cout << "Enter Depth: ";
		cin >> depth;
		setDepth(depth);
	}

	void putCuboids()
	{
		cout << height << "\t" << width << "\t" << depth << endl;
	}

	float getSurfaceArea()
	{
		float surfaceArea = 2 * (height * width) + 2 * (height * depth) + 2 * (width * depth);
		
		return surfaceArea;
	}

	float getVolume()
	{
		return height * width * depth;
	}

	float getSpaceDiagonal()
	{
		float spaceDiagonal = ((height * height) + (width * width) + (depth * depth));
		spaceDiagonal = sqrt(spaceDiagonal);
		return spaceDiagonal;
	}

	void putCuboidsInfo()
	{
		putCuboids();
		cout << "Surface Area: " << getSurfaceArea() << endl;
		cout << "Volume: " << getVolume() << endl;
		cout << "Space Diagonal: " << getSpaceDiagonal() << endl;
	}
};

int main()
{
	Cuboids c1(2, 3, 4), c2;
	
	c2.getCuboids();

	cout << endl;
	c1.putCuboidsInfo();
	cout << endl;
	c2.putCuboidsInfo();
	cout << endl;

	return 0;
}