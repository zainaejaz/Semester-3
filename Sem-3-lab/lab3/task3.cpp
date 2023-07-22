#include<iostream>
using namespace std;
#include<string>
#include<cstring>
#include<ctype.h>
#include<cctype>
char* reverseCase(const char* str);

int main()
{
    string str;
    cout << "Enter string:"<<endl;
    getline(cin , str);
    char *p = reverseCase(&str[0]);

    for (int i = 0; str[i] != '\0'; i++)
    {
        cout << p[i];
    }

    delete [] p;
    return 0;
}

char* reverseCase(const char* str)

{
    int i = 0;
    char *p = new char[40];
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
           p[i] = str[i] - 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
             p[i] = str[i] + 32;
        } 
        else if (str[i] == ' ')
        {
            p[i] = ' ';
        } 
        else{
              p[i] = str[i];
        }
     
        i++;
    }
    
    return p;  
}