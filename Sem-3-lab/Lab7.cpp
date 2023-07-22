#include<iostream>
using namespace std;

class Date
{
private:
    int day;          
    int month;
    int year;
public:

    // mutators

    void setDay(int day)
    {
        if (day >= 1 && day <= 31)
        {
            this->day = day;
        }
        else
        {
            this->day = 1;  //default value
        }
        
    }

    void setMonth(int month)
    {
        if (month >= 1 && month <= 12)
        {
            this->month = month;
        }
        else
        {
            this->month = 1;    //default value
        }
        
    }

    void setYear(int year)
    {
        if (year >= 1900)
        {
            this->year = year;
        }
        else
        {
            this->year = 1900;  //default value
        }
        
    }

    // getters

    int getDay()
    {
        return day;
    }

    int getMonth()
    {
        return month;
    }

    int getYear()
    {
        return year;
    }

    // constructors and destructors

    Date(int day , int month , int year)
    {
        setDay(day);
        setMonth(month);
        setYear(year);
    }

    Date(int month , int year)
    {
    
        setMonth(month);
        setYear(year);

        //assign default value to day

        this->day = 1;
    }

    Date()      //default constructor
    {
        this->day = 1;
        this->month = 1;
        this->year = 1900;

        
    }

    //destructors

    ~Date()
    {

    }

    //overloaded stream-insertion operator (friend function)

    friend ostream &operator<<(ostream &print , const Date &obj)
    {
        string month[12] = {"january" , "february" , "march" , "april" , "may" , "june" , "july" , "august" , "september" , "october" , "november" , "december"};
        print << month[obj.month - 1] << " " << obj.day << ", " << obj.year << endl << endl;
        return print;
    }

    //overloaded stream-extraction operator (friend function)

    friend istream &operator>>(istream &input , Date &obj)
    {
        cout << "Enter day:\n";
        input >> obj.day; 
        cout << obj.day << "/\n";

        obj.setDay(obj.day);

        cout << "Enter month:\n";
        input >> obj.month; 
        cout << obj.day << "/" << obj.month << "/\n";

        obj.setMonth(obj.month);

        cout << "Enter year:\n";
        input>>obj.year;
        cout << obj.day << "/" << obj.month << "/" << obj.year << endl << endl;

        obj.setYear(obj.year);

        return input;
    }

    //unary pre-increment overloaded operator

    Date operator++()
    {
        //checking the condition

        if (day == 31 && month == 12)  
        {
           day = 1;
           month = 1;
           year++;
            
        }

        else if (day == 31 || day == 30 || day == 28)
        {
            day = 1;
            month++;
        }
        
        else
        {
            day++;
        }
        
        
        return *this;
    }

    //unary post-increment overloaded operator

    Date operator++(int)
    {
        Date oldState(*this);

        if (day == 31 && month == 12)
        {
           day = 1;
           month = 1;
           year++;
            
        }

        else if (day == 31 || day == 30 || day == 28)
        {
            day = 1;
            month++;
        }
        
        else
        {
            day++;
        }

        return oldState;
    }

    //unary pre-decrement overloaded operator

    Date operator--()
    {
        if (day == 1 && month == 1)
        {
           day = 31;
           month = 12;
           year--;
            
        }

        else if (day == 1)
        {
            day = 31;
            month--;
        }
        
        else
        {
            day--;
        }


        return *this;
    }

    //unary post-decrement overloaded operator

    Date operator--(int)
    {
        Date oldState(*this);
        if (day == 1 && month == 1)
        {
           day = 31;
           month = 12;
           year--;
            
        }

        else if (day == 1)
        {
            day = 31;
            month--;
        }
        
        else
        {
            day--;
        }
        return oldState;
    }

    //binary subtraction overloaded operator

    int operator-(Date &obj)
    {

        if (this->day > obj.day)
        {
           return (this->day - obj.day);
        }

        else if (obj.day > this->day)
        {
            return (obj.day - this->day);
        }
        
    }

    //binary addition overloaded operator

    bool operator+() 
    {
        return((day == 5 && month == 2) || (day == 23 && month == 3) || (day == 1 && month == 5));
    }

};


int main()
{

    Date o1 , o2;

                     // if you enter
    cin >> o1;       // 12/12/2002
    cin >> o2;       // 14/12/2005

    Date preIncrement = ++o1;    
    Date postIncrement = o2++;
 
    cout << preIncrement;   // december 13, 2002 
    cout << postIncrement;   // december 14, 2005

    Date preDecrement = --o1;  //o1 become december 13, 2002 
    Date postDecrement = o2--;   //o2 become december 15, 2005 by incrementing

    cout << preDecrement;   // december 12, 2002
    cout << postDecrement;   // december 15, 2005

    int num = o1.operator-(o2);

    cout << "The number of days between two dates are " << num << endl << endl;    //return number of days b/w two dates

    if (o1.operator+())             //return true if it is holiday otherwise false
    {
        cout << "Public holiday" << endl;
    }
    else
    {
        cout << "No holiday" << endl;
    }
    
    

   return 0;
} 