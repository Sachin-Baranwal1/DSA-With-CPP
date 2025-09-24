#include <iostream>
using namespace std;
int main()
{
//     int x,y,z;
//     cout << "Enter the value of x ,y ,z " << endl;
//     cin >> x >> y >> z;
//     if(x>y &&  x>z)
//     cout << x << "is a gratest integer ";
//     if(y>z && y>x)
//     cout << y <<  " is a gratest integer ";
//     if(z>y && z>x)
//     cout << z <<  " is a gratest integer ";

// } 


//  GRADE ACCORDING TO MARKS :
int marks;
cout << "Enter the marks of a student : ";
cin >> marks;
if (marks >=91 && marks <=100)
cout << "Excellent";
else if (marks >=81 && marks <=90)
cout << "Very Good";
else if (marks >=71 && marks <=80)
cout << "Good ";
else if (marks >=61 && marks <=70)
cout << "Can Do Better";
else if (marks >=51 && marks <=60)
cout << "Average ";
else if (marks >=40 && marks <=50)
cout << "Below Average ";
else
cout << "Fail ";
}