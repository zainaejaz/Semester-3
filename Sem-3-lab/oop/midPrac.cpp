// #include<iostream>
// using namespace std;

// class Student
// {
// private:
//     static int rollNo;
//     static int count;
//     int marks[3];
// public:
//      Student()
//      {
//         cout <<"Parametrized constructor " <<endl;
//      }
//     ~ Student()
//     {
//         cout << "Destructor executed " <<endl;
//     }
//     void input()
//     {
//         for (int i = 0; i < 3; i++)
//         {
//              cout << "Enter marks of student " << count <<endl;
//             cin >> marks[i];
//         }
//             count++;
        
//     }

//     int avg() 
//     {
//         cout << "Roll no " << rollNo <<endl;
//         for (int i = 0; i < 3; i++)
//         {
//             cout << "marks " << marks[i] <<endl;
//         }
//         rollNo++;
//     }


// };

// int Student::rollNo = 501;
// int Student::count;

// int main()
// {
//     Student std;
//     Student *p = new Student[3]; 
//     for (int i = 0; i < 3; i++)
//     {
//         p->input();
//     }

//     for (int i = 0; i < 3; i++)
//     {
//         p->avg();
//     }

//     delete [] p;
//     p = NULL;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     float r = 3.3;
//     cout << (3.14 (* r * r)) << endl;

//    return 0;
// }

