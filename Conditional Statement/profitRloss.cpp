#include <iostream>
using namespace std;
int main ()
{
    int cp,sp;
    cout << "Enter a cost price: ";
    cin >> cp;
    cout << "Enter a selling  price: ";
     cin >> sp;
     if (cp<=sp)
     cout << "Profit of "<< sp - cp;
     else 
     cout << "Loss of " << cp -sp;
}