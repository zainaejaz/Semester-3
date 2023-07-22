
#include <iostream>
#include <string>

using namespace std;


template<class arrayType>
class Array
{

private:
	arrayType *data;
	int size;
public:
	Array()
	{
		data = new arrayType[5];

		for (int i = 0; i < 5; i++)
		{
			data[i] = 0;
		}

	}	
	
	Array(int size)
	{
		this->size = size;
		data = new arrayType[size];

		for (int i = 0; i < 5; i++)
		{
			data[i] = 0;
		}

		cout << "Parametrized" << endl;
	}	
	
	Array<arrayType> (const Array<arrayType> & obj)
	{
		this->size = obj.size;
		data = new arrayType[size];

		for (int i = 0; i < size; i++)
		{
			data[i] = obj.data[i];
		}


		cout << "copy" << endl;
	}

	~Array()
	{
		delete[] data;
	}

	int getSize() const
	{
		return size;
	}

	void setElement(int k, int index)
	{
		if (index >= 0 && index < size)
		{
			data[index] = k;
		}
		else
		{
			cout << "Index not valid " << endl;
		}
	}

	int countElement(int key)
	{
		int count = 0;
		for (int i = 0; i < size; i++)
		{
		if (key == data[i])
		{
			count++;
		}

		}

		return count;
	}

	Array<arrayType> operator=(const Array<arrayType> & obj)
	{
		if (this != &obj)
		{
			if (this->size != &obj.size)
			{
				delete[] data;

				this->size = obj.size;

				data = new arrayType[size];
			}

			for (int i = 0; i < size; i++)
			{
				data[i] = obj.data[i];
			}
		}
		return *this;
	}

	Array getSubArray(int strt_index, int lst_index)
	{
		Array<int> newSubArray(size);
		if (strt_index >= 0 && lst_index < size)
		{
		  for (int i = 0; i <= lst_index; i++)
		 {
			  if (i == strt_index)
			  {
				  newSubArray.data[i] = data[i];
			}
		 }

		}

		else
		{
			cout << " Indes is out of bound " << endl;
			newSubArray(0);
			newSubArray.data = NULL;
		}
		return newSubArray;
	}	
	
	Array<arrayType> operator+(const Array<arrayType> &obj)
	{
		int tempSize = size;
		for (int i = 0; i < size; i++)
		{
			data[tempSize] = obj.data[i];
			tempSize++;
		}

		return *this;
	}

	friend istream& operator>> (istream& input, Array<arrayType> & obj)
	{
		for (int i = 0; i < obj.size; i++)
		{
		   input >> obj.data[i];

		}

		return input;
	}	
	
	friend ostream& operator<< (ostream& print, const Array<arrayType> & obj)
	{
		for (int i = 0; i < obj.size; i++)
		{
		   print << obj.data[i] << endl;

		}

		return print;
	}

	bool operator==(Array <arrayType>& obj)
	{
		for (int i = 0; i < obj.size; i++)
		{
			if (data[i] != obj.data[i])
			{
				return false;
			}

			else
			{
				return true;
			}
		}
	}
	int& operator[](int index)
	{
		if (index >= 0 && index < size)		
		{
			return data[index];	
		}

		else
		{
		cout << "Array Index is Out-of-Bound" << endl;

		}
	}
	


	int operator[](int index) const
	{
		if (index >= 0 && index < size)		
		{
			return data[index];	
		}

		else
		{
		cout << "Array Index is Out-of-Bound" << endl;

		}
	}	
	
};


int main()
{
    Array<int> o1(5) , o2(5);

	Array<int> o3(o1);

	cout << "Enter o1 object \n";
	cin >> o1;

	cout << "Enter o2 object \n\n";
	cin >> o2;



	o1.setElement(2, 4);
	 
	cout << "After inserting 2 value at index 4 \n\n";

	cout << o1;

	if (o1 == o2)
	{
		cout << "Two array are same " << endl;
	}
	else
	{
		cout << "not same " << endl;
	}

    return 0;
}