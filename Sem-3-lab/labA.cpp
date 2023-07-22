// //task1
#include<iostream>
using namespace std;
int main()
{
    cout<<"****\n * \n****"<<endl<< endl;
    cout<<"  * \n* * *\n*   *\n*   *"<<endl<<endl;
    cout<<"* * *\n  *\n  *\n* * *"<<endl<<endl;
    cout<<"**  *\n* * *\n*  **"<<endl<<endl;
    cout<<"  * \n* * *\n*   *\n*   *"<<endl;
    return 0;
}

// //task2
// #include<iostream>
// using namespace std;
// int main()
// {
//     int num1 , num2 , small = 0 , lar = 0;
//     cin>>num1>>num2;
//     if (num1 < num2)
//     {
//         small = num1;
//         lar = num2;
//     }
//     else
//     {
//         small = num2;
//         lar = num1;
//     }
//     if (num1 < num2)
//     {
//          cout<<num1 << endl;
//          cout<<num2 << endl;
//     }
//     else
//     {
//         cout<<num2 << endl;
//          cout<<num1 << endl;
//     }
  
//     return 0;
// }

// //task3
// #include<iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout<<"Enter number within range of 1 through 10\n";
//     cin>>num; 
//     while (num < 1 || num > 10)
//     {
//          cout<<"Enter number within range of 1 through 10\n";
//          cin>>num;  
//     }
//     switch (num)
//     {
//     case 1:
//        cout<<"I\n";
//         break;
//     case 2:
//        cout<<"II\n";
//         break;
//     case 3:
//        cout<<"III\n";
//         break;
//     case 4:
//        cout<<"Iv\n";
//         break;
//     case 5:
//        cout<<"v\n";
//         break;
//     case 6:
//        cout<<"vI\n";
//         break;
//     case 7:
//        cout<<"vII\n";
//         break;
//     case 8:
//        cout<<"VII\n";
//         break;
//     case 9:
//        cout<<"VIII\n";
//         break;
//      case 10:
//        cout<<"X\n";
//         break;
//     default:
//         cout<<"NOT VALID NUMBER\n";
//     }
//     return 0;
// }

//task4
// #include<iostream>
// using namespace std;
// int main()
// {
//     int area1 , area2 , len1 , len2 , wid1 , wid2;
//     cout<<"Enter the length and width of rectangle 1\n";
//     cin>>len1>>wid1;
//     area1 = len1 * len2;
//     cout<<"Enter the length and width of rectangle 2\n";
//     cin>>len2>>wid2;
//     area2 = len2 * wid2;
//     if (area1 > area2)
//     {
//         cout<<"Rectangle 1 area is largest than Rectangle 2 area"<<endl;;
//     }
//     else if (area1 < area2)
//     {
//          cout<<"Rectangle 1 area is smaller than Rectangle 2 area"<<endl;;
//     }
//     else
//     {
//         cout<<"Rectangle 1 and Rectangle 2 are same\n";
//     } 
//     return 0;
// }

// //task4
// #include<iostream>
// using namespace std;
// int main()
// {
//     int sec , min , hour , days;
//     cout<<"Enter seconds";
//     cin>>sec;
//     if (sec < 1 || sec <= 60)
//     {
//          min = sec / 60;
//          cout<<"there are "<< min << " minutes in " << sec<<endl;
//     }
//     else if (sec < 1 || sec <= 3600)
//     {
//          min = sec / 3600;
//          cout<<"there are "<< min << " hourss in " << sec<<endl;
//     }
//     else  if (sec < 1 || sec <= 86400)
//     {
//          min = sec / 86400;
//          cout<<"there are "<< min << " days in " << sec<<endl;
//     }
//     return 0;
// }

//task5
// #include<iostream>
// using namespace std;
// int main()
// {
//     int num;
//     double dis , time;
//     cout<<"Medium\t\tSpeed\n\nAir\t\t1.100 feet per seconds\nWater\t\t4.900 feet per seconds\nSteel\t\t16.400 feet per seconds\n";
//     cout<<"Enter your choice\n";
//     cin>>num;
//     switch (num)
//     {
//     case 1:
//     cout<<"Air\t\t\t1.100 feet per second\n";
//     cout<<"Enter distance";
//     cin>>dis;
//     time = dis / 1.100;
//     cout<<"Amount of Time Air"<<time;
//     break;
//     case 2:
//     cout<<"Water\t\t\t4.900 feet per second\n";
//     cout<<"Enter distance";
//     cin>>dis;
//     time = dis / 4.900;
//      cout<<"Amount of Time Air"<<time;
//         break;
//     case 3:
//     cout<<"Steel\t\t\t16.400 feet per second\n";
//     cout<<"Enter distance";
//     cin>>dis;
//     time = dis / 16.400;
//      cout<<"Amount of Time Air"<<time;
//         break;-1
//     default:
//         cout<<"Wrong choice\n";
//         break;
//     }
//     return 0;
// }
