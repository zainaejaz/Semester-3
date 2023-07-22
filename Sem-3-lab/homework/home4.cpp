#include<iostream>
using namespace std;

class rationalNumber
{
private:
    int denominator;
    int numerator;

public:

    //prototypes

    void setNumerator(int);
    void setDenominator(int);

    int getNumerator();
    int getDenominator();

    rationalNumber(int , int);
    rationalNumber(int);
    ~rationalNumber();

    friend ostream& operator<<(ostream& , const rationalNumber&);
    friend istream& operator>>(istream& , rationalNumber&);
    rationalNumber operator+(const rationalNumber&) const;
    rationalNumber operator-(const rationalNumber&) const;
    rationalNumber operator*(const rationalNumber&) const;
    rationalNumber operator/(const rationalNumber&) const;
    bool operator<(const rationalNumber&) const;
    bool operator==(const rationalNumber&) const;
    rationalNumber operator-() const;
    bool operator!() const; 
};

//Setters

void rationalNumber::setNumerator(int numerator)
{
  
        this->numerator = numerator;
}

void rationalNumber::setDenominator(int denominator)
{
    if (denominator > 0)
    {
        this->denominator = denominator;
    }
    else
    {
        this->denominator = 1;
    }
}

//Getters

int rationalNumber::getNumerator()
{
    return numerator;
}

int rationalNumber::getDenominator()
{
    return denominator;
}

//Constructors and Destructor

rationalNumber::rationalNumber(int numerator = 0 , int denominator = 0)
{
    setNumerator(numerator);
    setDenominator(denominator);
}

rationalNumber::rationalNumber(int numerator)
{
    setNumerator(numerator);
    setDenominator(1);
}

rationalNumber::~rationalNumber()
{

}

//Overloaded stream-insertion << operator

ostream& operator<<(ostream &print , const rationalNumber& obj)
{
    print << obj.numerator << "/" << obj.denominator;
    return print;
}

//Overloaded stream-extraction >> operator

istream& operator>>(istream &input , rationalNumber& obj)
{
    cout << "Enter numerator value: " <<endl;
    input >> obj.numerator;

    obj.setNumerator(obj.numerator);

    cout << "Enter denominator value: " <<endl;
    input >> obj.denominator;

    obj.setDenominator(obj.denominator);

    return input;

}

//Binary operation

rationalNumber rationalNumber::operator+(const rationalNumber& obj) const
{
    rationalNumber add;

    add.numerator = (this->numerator * obj.denominator) + (this->denominator * obj.numerator);

    add.denominator = this->denominator * obj.denominator;

    return add;
}

rationalNumber rationalNumber::operator-(const rationalNumber& obj) const
{
    rationalNumber sub;

    sub.numerator = (this->numerator * obj.denominator) - (this->denominator * obj.numerator);

    sub.denominator = this->denominator * obj.denominator;

    return sub;
}

rationalNumber rationalNumber::operator*(const rationalNumber& obj) const
{
    rationalNumber mul;

    mul.numerator = this->numerator * obj.numerator;

    mul.denominator = this->denominator * obj.denominator;

    return mul;
}

rationalNumber rationalNumber::operator/(const rationalNumber& obj) const
{
    rationalNumber mul;

    mul.numerator = this->numerator * obj.denominator;

    mul.denominator = this->denominator * obj.numerator;
    
    return mul;
}

//comparison operation

bool rationalNumber::operator<(const rationalNumber& obj) const
{

    return((this->numerator * obj.denominator) < (this->denominator * obj.numerator));  
}

bool rationalNumber::operator==(const rationalNumber& obj) const
{

    return((this->numerator * obj.denominator) == (this->denominator * obj.numerator));  
}

// unary operation

rationalNumber rationalNumber::operator-() const
{

    rationalNumber negative;

    if (numerator >= 0 && denominator > 0)
    {
        negative.numerator = -numerator;
        negative.denominator = denominator;
    }
    else
    {
        negative.numerator = numerator;
        negative.denominator = denominator;
    }
    return negative;
    
}

bool rationalNumber::operator!() const
{

    return ((numerator <= 0 && denominator > 0) || (numerator >= 0 && denominator < 0));
}

int main()
{
 
   rationalNumber rational1(0 , 0) , rational2(0 , 0) ;

    //input with stream-extraction >> overloaded operator 

   cin >> rational1 >> rational2; 

   //diplay the binary operation with stream-insertion << overloaded operator  

   cout << "The addition of rational number are : "<< rational1.operator+(rational2) << endl;  //or o3 = o1 + o2
   cout << "The subtraction of rational number are : "<< rational1.operator-(rational2) << endl; //or o3 = o1 - o2
   cout << "The multiplication of rational number are : "<< rational1.operator*(rational2) << endl;  //or o3 = o1 * o2
   cout << "The division of rational number are : "<< rational1.operator/(rational2) << endl << endl; //or o3 = o1 / o2

   cout << "The comparison of rational number are : "<< endl; 
    
   //diplay the comparison operation with stream-insertion << overloaded operator  

   if(rational1.operator<(rational2))
   {
      cout << rational1 << " < " << rational2 <<endl;
   }
   else
   {
        cout << rational2 << " < " << rational1 <<endl;
   }

   if(rational1.operator==(rational2))
   {
      cout << "Both are same " << rational1 << " == " << rational2 <<endl;
   }
   else
   {
        cout << "Different states " << rational1 << " != " << rational2 <<endl;
   }

    //diplay unary operation with stream-insertion << overloaded operator  

    cout << "The unary operator to convert a rational number into its negative form : "<<  rational1.operator-() << endl;  //or -rational1

    if (rational1.operator!())    //or !rational1
    {
        cout << "The rational number is negative " << endl;
    }
    else
    {
        cout << "The rational number is not negative " << endl;
    }
    
   return 0;
}