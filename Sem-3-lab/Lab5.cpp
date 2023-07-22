#include<iostream>
using namespace std;
#include<string>

class Student
{
private:
   int regNo;
   string firstName;
   string lastName;
   string program;
   float cgpa;
public:

    // default constructor

    Student()
    {
        regNo = 0;
        firstName = "";
        lastName = "";
        program = "";
        cgpa = 0;
    }

    //Parametrized contructor

    Student(int stdRegNo , string fn , string ln , string prog)
    {
        regNo = stdRegNo;
        firstName = fn;
        lastName = ln;
        program = prog;
        cgpa = -1;
    }

    Student(int stdRegNo , string fn , string prog)
    {
        regNo = stdRegNo;
        firstName = fn;
        program = prog;
        lastName = "";
        cgpa = -1;
    }

    Student(int stdRegNo , string fn , string ln , string prog , float cgp)
    {       
        regNo = stdRegNo;
        firstName = fn;
        lastName = ln;
        program = prog;
        cgpa = cgp;
    }

    //Destructor

    ~Student()
    {
        cout << "dESTRUCTOR EXECUTEED" << endl;
    }

    //Setters

    void setRegNo(int stdRegNo)
    {
        if (stdRegNo <= 501 || stdRegNo >= 565)
        {
           regNo = stdRegNo;
        }
        else
        {
            regNo = 0;
        }
    }

    void setFirstName(string fn)
    {
        firstName = fn;
    }
    void setLastName(string ln)
    {
        lastName = ln;
    }

    void setProgram(string prog)
    {
        program = prog;
    }

    void setCgpa(float stdCgp)
    {
        if (stdCgp >= 0.0 && stdCgp <= 4.00)
        {
           cgpa = stdCgp;
        }
        else
        {
            cgpa = -1;
        }
        
    }

    //getters

    int getRegNo()
    {
        return regNo;
    }

    string getFirstName()
    {
         return firstName;
    }
    string getLastName()
    {
         return lastName;
    }

    string getProgram() 
    {
        return program;
    }

    float getCgpa()
    {
         return cgpa;
    }

    //member functions
    
    void set(int stdRegNo , string fn , string ln , string prog , float gpa)
    {
        setRegNo(stdRegNo);
        setFirstName(fn);
        setLastName(ln);
        setProgram(prog);
        setCgpa(gpa);
    }

    void read()
    {
        cout << "Enter student registrer number: " << endl;
        cin >> regNo;
        setRegNo(regNo);

        cout << "Enter student first name: " << endl;
        cin >> firstName;
        setFirstName(firstName);

        cout << "Enter student last name: " << endl;
        cin >> lastName;
        setLastName(lastName);

        cout << "Enter student program: " << endl;
        // cin >> program;
        cin.ignore();
        getline(cin , program);
        setProgram(program);

        cout << "Enter student Cgpa: " << endl;
        cin >> cgpa;
        setCgpa(cgpa);
    }

    void write(int res1 , int res2)
    {
        // cout << "The student registration number is: " << regNo << endl;
        // cout << "The student first name is: " << firstName << endl;
        // cout << "The student last name is: " << lastName << endl;
        // cout << "The student program name is " << program << endl;
        // cout << "The student CGPA IS " << cgpa << endl;
        if (res1 == 1)
        {
            cout << "\n";
            cout << firstName <<" "<< lastName << " is enrolled is first semester" <<endl <<endl;
        }
        else
        {
            cout << firstName <<" "<< lastName << " is not enrolled is first semester" << endl <<endl;
        }
            
          cout << firstName <<" "<< lastName << " CGPA is " << cgpa << endl << endl;

       if (res1 == 1)
        {
            cout << firstName <<" "<< lastName << " is promoted in next semester" <<endl <<endl;
        }
        else
        {
            cout << firstName <<" "<< lastName << " is not promoted in next semester\n" << endl <<endl;
        } 
 
    }

    bool isFirstSemester()
    {
        if (cgpa != -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }  
    }

    float getPercentage()
    {
        if (cgpa >= 0.0 && cgpa <=4.0)
        {
            return (cgpa * 100) / 4;
        }
        else
        {
            cgpa = -1;
        }
        
    }

    bool isPromoted()
    {
        if(cgpa >= 2.0 && cgpa <= 4.0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        
    }

    void print()
    {
        cout << regNo <<"\t\t"<< firstName <<"\t\t"<< lastName <<"\t\t"<< program <<"\t\t"<< cgpa <<endl;
    }
};

int main()
{
    //parametrized constructor

    Student std1(123 , "zaina" , "ejaz" , "Information Technology" , 2.00) , std2 , std3;

    //set method

    std2.set(234 , "asia" , "bibi" , "Information Technology" , 3.00);

    //read method

    std3.read();

    int res1;
    int res2;
  
    cout <<"\t\t-------------TABLE----------" << endl << endl;

    std1.print();
    std2.print();
    std3.print();

    res1 = std1.isFirstSemester();
    std1.getPercentage();
    res2 = std1.isPromoted();
    std1.write(res1 , res2);

    res1 = std2.isFirstSemester();
    std2.getPercentage();
    res2 = std1.isPromoted();
    std2.write(res1 , res2);

    res1 = std3.isFirstSemester();
    std2.getPercentage();
    res2 = std1.isPromoted();
    std3.write(res1 , res2);

    return 0;
}

