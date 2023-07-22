#include<iostream>
using namespace std;
#include<cstring>
#include<string>

void letterPerWord(const char* strg);

int main()
{
    string str;

    cout <<"Word\t\t" << "Number of characters" <<endl;
    cout << "Enter string:" << endl;
    getline(cin , str);

    letterPerWord(&str[0]);

    return 0;
}

void letterPerWord(const char* strg)
{

    int count = 0;
    for (int i = 0; strg[i] != '\0'; i++)
    {

        if (strg[i] != ' ')
        {
            count++;
            cout << strg[i];
        }
        else if (strg[i] == ' ')
           {
            cout <<"\t\t";
            cout << count << endl;
            count = 0;
        }
    }
    cout << "\t\t" << count <<endl;
}