
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


template<class arrayType>
class Array
{

private:
	vector<arrayType> data;
	int size;
public:

	//Array()
	//{
	//	//data = new int[5];
	//	for (int i = 0; i < 5; i++)
	//	{
	//		data[i] = 0;
	//	}
	//}	
	
	array(int size)
	{
		this->size = size;
		data = new t[size];

		for (int i = 0; i < 5; i++)
		{
			data[i] = 0;
		}
	}	
	
	// Array(const Array& obj)
	// {
	// /*	this->size = obj.size;
	// 	data = new int[size];*/

	// 	for (int i = 0; i < size; i++)
	// 	{
	// 		data[i] = obj.data[i];
	// 	}
	// }

	// ~Array()
	// {
	// 	//delete[] data;
	// }

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
		return count(data.begin(), data.end(), key);
	}

	void input()
	{
		int n;
		for (int i = 0; i < data.size(); i++)
		{
			cin >> n;
			data.push_back(n);
		}
	}

};


int main()
{
    Array<int> o1(5);

	o1.input();

	int a = o1.countElement(3);

	cout << a;

    return 0;
}


#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>

using namespace std;

int main() {

	string text;
	getline(cin, text);

	for (int i = 0; text[i] != NULL; i++)
	{
		cout << toupper(text[i]) << endl;

	}

	return 0;
}