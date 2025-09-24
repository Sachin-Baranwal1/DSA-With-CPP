#include <iostream>
using namespace std;
int main (){
    int x1,y1,x2,y2,x3,y3,a,b,c;
    cin >> x1 >> y1>>x2>>y2>> x3>>y3;
    a=(y2-y1)/(x2-x1);
    b=(y3-y2)/(x3-x2);
    c=(y3-y1)/(x3-x1);

    if(a==b && a==c)
    cout << "Fall on One Straight Line  ";
    else 
    cout << "Not on a straight Line ";

    
}