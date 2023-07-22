#include<iostream>
using namespace std;
#include<iomanip>
#include<string>

class Employee
{
private:
    string name;
    int id;
    string department;
    string position;
public:

    //parametrized constructor

    Employee(string empName , int idNum , string dep , string pos)
    {
       setName(empName); 
       setId(idNum); 
       setDep(dep); 
       setPos(pos); 
    }

    Employee(string empName , int idNum)
    {
        name = empName;
        id = idNum;
        department = "";
        position = ""; 
    }
    
    //Default constructor

    Employee()
    {
        name = "";
        id = 0;
        department = "";
        position = ""; 
    }

    //Copy constructor

    Employee(const Employee& obj)
    {
        name = "Naeem Ahmad";
        id = 1241;
        department = "Computer Science";
        position = "Lecturer"; 
    }

    //Destructor

    ~Employee()
    {
        cout << "Destructor executed" << endl;
    }

    //getters

    string getName()
    {
        return name;
    }

    int getId()
    {
        return id;
    }

    string getDep()
    {
        return department;
    }

    string getPos()
    {
        return position;
    }

    //setters

    void setName(string empName)
    {
        name = empName;
    }

    void setId(int empId) 
    { 

        id = empId;
    }

    void setDep(string dep)
    {
        department = dep;
    }

    void setPos(string pos)
    {
        position = pos;
    }

    //Member functions

    void setInfo(string empName , int idNum , string dep , string pos)
    {
       setName(empName); 
       setId(idNum); 
       setDep(dep); 
       setPos(pos);
    }

    void getInfo()
    {
        cout <<"Please enter Employee name:" <<endl;
        getline(cin , name);
        setName(name);

        cout <<"Please enter Employee ID number:" <<endl;
        cin >>id;
        setId(id);

        cout <<"Please enter Employee Department:" <<endl;
        cin.ignore();
        getline(cin , department);
        setDep(department);

        cout <<"Please enter Employee Position:" <<endl;
        getline(cin , position);
        setPos(position);
        
    }

    void putInfo()
    {
        cout << name << "\t\t\t";
        cout << id << "\t\t\t";
        cout << department << "\t\t\t";
        cout << position <<endl;
    }

};

int main()
{
    Employee emp1 , emp4;

    //Initialize the data for employee1 by using getInfo function

    emp1.getInfo();       

    //Initialize the data for employee2 by using parametrized constructor

    Employee emp2("Nouman Abdullah" , 1231 , "Software Engineering" , "Lecturer"); 

    //Initialize the data for employee3 by using copy constructor

    Employee emp3(emp1);

    //Initialize the data for employee4 by using setInfo function

    emp4.setInfo("Nadia" , 1242 , "Information Technology" , "Assistant Professor");

    cout <<"Name" <<"\t\t\t\t" << "Id Number" <<"\t\t" << "Department" << "\t\t\t\t" << "Position" << endl;

    //display all employee data

    emp1.putInfo();
    emp2.putInfo();
    emp3.putInfo();
    emp4.putInfo();

    return 0;
}