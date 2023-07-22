//TASK1

//header file declaration
#include"iostream"
#include<cctype>
#include<string>    
using namespace std;
//funtion prototype
double charges(int* noOfDays, double* dailyRate, double* hospMedicationCharges, double* chargForHosService);
double charges(double* chargForHosService_outPatient, double* hospMedicationCharges_outPatient);

int main()
{
    //defining variables for patient information
    string in_pat = "in-patient";
    string out_pat = "out-patient";
    string patientInfo;
    char ch;

    //defining variables for in-patient

    int noOfDays;
    double dailyRate;
    double hospMedicationCharges;
    double chargForHosService;

    //defining variables for out-patient

    double chargForHosService_outPatient;
    double hospMedicationCharges_outPatient;
    double totalCharge;

    //input patient informatoin

    cout << "Enter patient information\nIf the patient was admitted as an in-patient or an out-patient\nPlease type in-patient or out-patient for calculating charges" << endl;
    cin >> patientInfo;

    //check validaton
    while (in_pat != patientInfo && out_pat != patientInfo)
    {
        cout << "Please type in-patient or out-patient for calculating charges again" << endl;
        cin >> patientInfo;
    }

    //In string object we can use relational operator for comparison instead of strcmp function

    do
    {

        if (in_pat == patientInfo)
        {
            //taking input for in-patient

            cout << "Enter number of days:" << endl;
            cin >> noOfDays;
            cout << "Enter dailyrate charges:" << endl;
            cin >> dailyRate;
            cout << "Enter hospital medication charges:" << endl;
            cin >> hospMedicationCharges;
            cout << "Enter charges for hospital service(lab test etc):" << endl;
            cin >> chargForHosService;
            totalCharge = charges(&noOfDays, &dailyRate, &hospMedicationCharges, &chargForHosService);
            cout << "The total charges are " << totalCharge << " for in-patient's hospital stay" << endl;
        }
        else if (out_pat == patientInfo)
        {
            //taking input for out-patient

            cout << "Enter charges for hospital service(lab test etc):" << endl;
            cin >> chargForHosService_outPatient;
            cout << "Enter hospital medication charges:" << endl;
            cin >> hospMedicationCharges_outPatient;
            totalCharge = charges(&chargForHosService_outPatient, &hospMedicationCharges_outPatient);
            cout << "The total charges are " << totalCharge << " for out-patient's hospital stay" << endl;
        }

        //taking input if u want to continue or not
        cout << "Do you want to continue\n Press (Y/y) for Yes and (N/n) for No" << endl;
        cin >> ch;

        //check validaton

        while (toupper(ch) != 'Y' && toupper(ch) != 'N')
        {
            cout << "Press (Y/y) for Yes and (N/n) for No" << endl;
            cin >> ch;
        }

    } while (toupper(ch) == 'Y');


    return 0;
}

//function definition for in-patient

double charges(int* noOfDays, double* dailyRate, double* hospMedicationCharges, double* chargForHosService)
{
    return (*noOfDays * *dailyRate) + *hospMedicationCharges + *chargForHosService;
}

//function definition for out-patient

double charges(double* chargForHosService_outPatient, double* hospMedicationCharges_outPatient)
{
    return *chargForHosService_outPatient + *hospMedicationCharges_outPatient;
}


//Task2

#include"iostream"
using namespace std;
double getData(double *arr , int size);
void displayData(const double *arr , const int size);
int countEven(double arr[] , int size);
double mean(double *arr , int size);
#define SIZE 5
int main()
{
    double arr[SIZE] , meanResult;
    int totalEven;
    getData(arr , SIZE);
    displayData(arr , SIZE);
    totalEven = countEven(arr , SIZE);
    meanResult = mean(arr , SIZE);
    cout << "The total count of even number are " << totalEven << endl;
    cout << "The mean of array are " << meanResult << endl;
    return 0;
}
double getData(double *arr , int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter elemet " << i + 1 << endl;
        cin >>*(arr + i);
    }
    
}
void displayData(const double *arr , const int size)
{
    cout << "The elements are " <<endl;
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << endl;
    } 
}
int countEven(double arr[] , int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (static_cast<int>(arr[i]) % 2 == 0)
        {
           count++;
        }
        
    } 
    return count;
}
double mean(double *arr , int size)
{
    int sum = 0;
    double totalMean;
    for (int i = 0; i < size; i++)
    {
        sum = sum + *(arr + i);
    }
    return totalMean = sum / size; 
}


//task3

// #include<iostream>
// using namespace std;
// #define SIZE 3
// void getData(int arr[][SIZE] , int size);
// void displayData(int arr[][SIZE] , int size);
// void transpose(int arr[][SIZE] , int size);
// int main()
// {
//     int arr[3][3];
//     getData(arr , SIZE);
//     displayData(arr , SIZE);
//     transpose(arr , SIZE);
//     cout <<"After transpose:" << endl;
//     for (int i = 0; i < SIZE; i++)
//     {
//         for (int j = 0; j < SIZE; j++)
//         {
//               cout << arr[j][i] <<" ";
//         }
//            cout <<endl;
//     }
//     return 0;
// }
// void getData(int arr[][SIZE] , int size)
// {
//     for (int i = 0; i < SIZE; i++)
//     {
//         for (int j = 0; j < SIZE; j++)
//         {
//               cout <<"Enter element" << i + 1 << endl;
//               cin >>arr[i][j];
//         }      
//     }
// }
// void displayData(int arr[][SIZE] , int size)
// {
//     for (int i = 0; i < SIZE; i++)
//     {
//         for (int j = 0; j < SIZE; j++)
//         {
//               cout << arr[i][j] <<" ";
//         }
//            cout <<endl;
//     }
// }
// void transpose(int arr[][SIZE] , int size)
// {
//     int temp;
//     for (int i = 0; i < SIZE; i++)
//     {
//         for (int j = 0; j < SIZE; j++)
//         {
//             if (i == j)
//             {
//                 continue;
//             }
//             temp = arr[i][j];
//             arr[i][j] = arr[j][i];
//             arr[j][i] = temp; 
//         } 
//     }   
// }