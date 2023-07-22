//task1

//temperature from fahrenheit to celsius

// #include<iostream>
// using namespace std;
// double celsius(double);
// int main()
// {
//     double far = 0 , temp;
//     cout << "Enter a fahrenheit tempereature" << endl;
//     cin >>far;
//     for (int i = 0; i < 20; i++)
//     {
//          temp = celsius(far);
//          cout << "Convert from fahrenheit to Celsius = " << temp << endl;
//     }
    
//     return 0;
// }
// double celsius(double far)
// {
//     double cel;
//     cel = 0.5 * (far - 32) ;
//     return cel;
// }

//task2

//WAP to let 10 integer into an array and add pair of element

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[10] , res[10] , index = 0;
//     for (int i = 0; i < 10; i++)
//     {
//         arr[i] = i + 1;
//     }
//     for (int i = 0; i < 10; i = i + 2)
//     {
        
//            res[index] = arr[i] + arr[i + 1];
//            index++;  
//     }
//     for (int i = 0; i < 10 / 2; i++)
//     {
//         cout << res[i] << endl;
//     }
    
//     return 0;
// }

//task 3

//wAP to add two matrices and store in third matric by using function

#include<iostream>
using namespace std;
#define SIZE 3
int getData(int mat1[][SIZE] , int size1 , int mat2[][SIZE] , int size2);
int display(int mat[][SIZE] , int size);
int sum(int mat1[][SIZE] , int size1 , int mat2[][SIZE] , int size2 , int res[][SIZE] , int size3);
int main()
{
    int mat1[SIZE][SIZE] = {0} , mat2[SIZE][SIZE] = {0} , res[SIZE][SIZE] = {0}; 
    getData(mat1 , SIZE , mat2 , SIZE);
    sum(mat1 , SIZE , mat2 , SIZE , res , SIZE);
    return 0;
}    
int getData(int mat1[][SIZE] , int size1 , int mat2[][SIZE] , int size2)
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            cout << "Enter matrix 1" << "of row" << i << "and column" << j << endl;
            cin >> mat1[i][j];
        }
    }
    display(mat1 , SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            cout << "Enter matrix 2" << "of row " << i << "and column " << j << endl;
            cin >> mat2[i][j];
        }
    }
    display(mat2 , SIZE);
}
int display(int mat[][SIZE] , int size)
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        { 
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }
}
int sum(int mat1[][SIZE] , int size1 , int mat2[][SIZE] , int size2 , int res[][SIZE] , int size3)
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            res[i][j] = mat1[i][j] + mat2[i][j];
        }
        
    }
    cout << "Sum of array" << endl;
    display(res , SIZE);
}

//task4
//count words in a sentence
#include<iostream>
#include<string>
using namespace std;
int wordCounter(string str);
int main()
{
    string name;
    int res = wordCounter(name);
    cout << "The total words are " << res << " in a sentence" << endl;
    return 0;
}
int wordCounter(string str)
{ 
    int countWord = 1;
    cout <<"Enter name:" << endl;
    getline(cin , str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            countWord++;
        }
    }
    return countWord;    
}

//TAS5
//WAP that create a paaword that meet certain createria
#include<iostream>
#include<cstring>
#include<string>
#include<cctype>
using namespace std;
int main()
{
    string password;
    int index = 0;
    bool countUpper = false , countLower = false , countDigit = false;
    cout << "Enter password" << endl;
    cin >> password;
    int len = password.length();
    if (len >= 6)
    {
        while (password[index] != '\0')
        {
            if (isupper(password[index]))
            {
                countUpper = true;
            }
            else if (islower(password[index]))
            {
                countLower = true;
            }
            else if (isdigit(password[index]))
            {
                countDigit = true;
            }
            index++;   
        }  
    }
    if (countUpper == true && countLower == true && countDigit == true) 
    {
        cout << password <<" is valid because it meet the stated criteria"<<endl;
    }
    else
    {
        cout << password <<" is not valid because it does not meet following criteria" <<endl;
        cout << "Password is not 6 character long" << endl;
        cout << "Uppercase letter is not included in password" << endl;
        cout << "Lowercase letter is not included in password" << endl;
        cout << "Digit is not included in password" << endl;
    }
    return 0;
} 