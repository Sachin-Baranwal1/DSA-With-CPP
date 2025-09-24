#include <iostream>
using namespace std;
int main (){
    char x;
    cin >> x;
    if (x >='A' && x <= 'Z' || x >='a' && x <= 'z')
    cout << "ALPHABET ";
    else if (x >='0' && x<= '9')
    cout << "DIGIT";
else 
    cout << "SPECIAL CHARACTER";

    
}