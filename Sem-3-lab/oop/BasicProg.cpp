// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"size of integer "<<sizeof(int)<<endl;
//     cout<<"size of char "<<sizeof(char)<<endl;
//     cout<<"size of float "<<sizeof(float)<<endl;
//     cout<<"size of double "<<sizeof(double)<<endl;
//     return 0;
// }

//math tutor

// #include<iostream>
// #include<cstdlib>
// #include<ctime>
// #include<iomanip>
// using namespace std;
// int main()
// {
//     //constant
//     const int min_value = 100;
//     const int max_value = 300;
//     //variables
//     int n1;
//     int n2 , sum = 0;
//     //get system time
//     unsigned seed = time(0);
//     //seed random number generator
//     srand(seed);
//     n1 = (rand() % (max_value - min_value + 1)) + min_value;
//     n2 = (rand() % (max_value - min_value + 1)) + min_value;
//     cout<<setw(5)<<n1<<endl;
//     cout<<"+"<<setw(5)<<n2<<endl;
//     sum = n1 + n2;
//     cout<<"---------"<<endl;
//     cout<<setw(5)<<sum<<endl;
//     return 0;
// }

//assending order

// #include"iostream"
// using namespace std;
// int main()
// {
//     int arr[5] = {2 , 5 , 3 , 1 , 4};
//     int temp = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 1 + i; j < 5; j++)
//         {
//             if (arr[i] < arr[j])
//             {
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             } 
//         }
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] <<endl;
//     }
//     return 0;
// } 

// #include"iostream"
// using namespace std;
// int mode(int arr[] , int size , int *freqValue , int *freElement);
// int main()
// {
//     int arr[7] , res , modeValue , freElement;
//     for (int i = 0; i < 7; i++)
//     {
//          cin >> arr[i];
//     }
//         mode(arr , 7 , &modeValue , &freElement);
//         cout << "Mode count is " << modeValue << endl;
//         cout << "Mode value is " << freElement;
    
//     return 0;
// }
// int mode(int arr[] , int size , int *freqValue , int *freElement)
// {
//     int mode = 0 , maxNum = 0;
//     for (int i = 0; i < size; i++)
//     {
//         mode = 1;
//         for (int j = 1 + i; j < size; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 mode++;
//             }    
//         }
//             if (mode > maxNum)
//             {
//                  maxNum = mode;
//                 *freqValue = maxNum;
//                 *freElement = arr[i];
//             } 
//     }
// }                                                 


// //merging array

// #include"iostream"
// using namespace std;
// int main()
// {
//     int arr1[3] = {1 , 3 , 5} , arr2[3] = {2 , 4 , 6};
//     int arr3[6] , count = 0;
//     for (int i = 0; i < 6; i++)
//     {
//         for (int j = 0 + i; j <= j; j++)
//         {
//            arr3[i + j] = arr1[i];
//            arr3[i + j + 1]  = arr2[j];
//         }
//     }
//     for (int i = 0; i < 6; i++)
//     {
//         cout << arr3[i] << endl;
//     }
    
//     return 0;
    
// }


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

// #include<iostream>
// using namespace std;
// #define SIZE 3
// void getData(int arr[][SIZE] , int size);
// void displayData(int arr[][SIZE] , int size);
// bool isIdentity(int arr[][SIZE] , int size);
// int main()
// {
//     int arr[SIZE][SIZE];
//     getData(arr , SIZE);
//     displayData(arr , SIZE);
//     if(isIdentity(arr , SIZE))
//     {
//         cout <<"This is identity matrix"<< endl;
//     }
//     else    
//     {
//         cout <<"This is not identity matrix" << endl;
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
// bool isIdentity(int arr[][SIZE] , int size)
// {
//     bool flag = false , count = 0;
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j < size; j++)
//         {
//            if (i == j)
//            {
//                 if (arr[i][j] == 1 && arr[i][j] != 0)
//                 {
//                     flag = true;
//                     count++;
//                 }    
//            }  
//         }
//     }
//     if (count == 3)
//     {
//       return flag;
//     }
//     else
//     {
//         return flag = false;
//     }
    
// }

// #include <iostream>
// using namespace std;

// class sum
// {
// private:
//     int n1, n2;

// public:
//     void setData(int num1, int num2)
//     {
//         n1 = num1;
//         n2 = num2;
//     }
//     int sumOfNum()
//     {
//         return n1 + n2;
//     }
// };

// int main()
// {
//     int num1 = 0 , num2 = 0;

//     cout << "Enter value 1:" << endl;
//     cin >> num1;
//     cout << "Enter value 2:" << endl;
//     cin >> num2;

//     sum sumData;
//     sumData.setData(num1, num2);
//     int a = sumData.sumOfNum();

//     cout << "sum is " << a << endl;

//     return 0;
// }


// #include<iostream>
// using namespace std;
// int *pairWiseSum(const int arr[] , const int size , int& newArraySize) ;

// int main()
// {
//     int arr[] = {1 , 2 , 3 , 4 , 5, 6 , 7 , 8 , 9 , 10 };
//     int newArraySize = 0;
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int *p = pairWiseSum(arr, size, newArraySize);

//     for (int i = 0; i < newArraySize; i++)
//     {
//         cout << "Array elements are:" << endl;
//         cout << p[i] << endl;
//     }
//     delete[] p;
//     return 0;
// }

// int *pairWiseSum(const int arr[], const int size, int &newArraySize)
// {
//     newArraySize = size / 2;
//     int index = 0;
//     int *p = new int[newArraySize];
//     for (int i = 0; i < size; i = i + 2)
//     {
//         for (int j = 1; j <= j; j = j + 2)
//         {
//             p[index] = arr[i] + arr[j];
//             index++;
//         }
//     }
//     return p;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//    int arr[] = {2 , 2 , 3 , 9 , 3 , 4};
//    int i , j;

//     for (i = 0; i < 6; i++)
//     {
//         for (j = 0; j < 6; j++)
//         {
//             if (i == j)
//             {
//                 continue;
//             }

//             if (arr[i] == arr[j])
//             {
//                 break;
//             }
            
//         }
//      if (j == 6)
//      {
//          cout << arr[i] <<endl;c                     
//     }
//     }
    
    
//    return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
// int arr1[] = {2 , 3 , 4 , 5 , 7} , arr2[] = {2 , 6 , 2 , 1 , 7};
// int arr3[] = {0} , k = 0;

// for (int i = 0; i < 5; i++)
//  {
//     for (int j = 0; j < 5; j++) {

//         if (arr1[i] == arr2[j])
//         {
//             arr3[k] = arr1[i];
//             cout << arr3[k] << endl;
//             break;
//         }
//     }
//     k++;
// }
//    return 0;
// }


#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(nullptr));
    int min = 0;
    int max = 10 - 1;
    for (int i = 0; i < 10; i++)
    {
        cout << (rand() % (max - min + 1)) + min << endl; 
    }
    
   return 0;
}