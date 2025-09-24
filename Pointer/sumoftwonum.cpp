#include <iostream>
using namespace std;
int main(){
 int  a,b;
 cout << "Enter a first number ::";
 cin >> a;
 cout << "Enter a second number ::";
 cin >> b;
 int *p1=&a;
 int *p2=&b;
 int sum=*p1 + *p2;
 cout << sum;
return 0;
}