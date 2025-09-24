#include <iostream>
using namespace std;
int main (){
    int x,y;
    cin >> x >> y;
    if (x==0 && y !=0)
    cout << "Lies On Y - Axis ";
    else if (x !=0 && y==0)
    cout << "Lies On X - Axis ";
    else if (x==0 && y==0)
    cout << "Lies On Origin ";

    
}