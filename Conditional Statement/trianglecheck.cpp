#include <iostream>
using namespace std;
int main (){
    int x,y,z;
    cout << "Enter the sides of triangle ";
    cin >> x >> y >> z;;
    if (x==y && y==z && z==x)
    cout << "Equilateral Triangle";
    else if (x==y || y==z || z==x)
    cout << "Isosceles Triangle"; 
    else 
    cout << "Scalene Triangle";
}
 