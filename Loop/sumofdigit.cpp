#include <iostream>
using namespace std;
int main(){
    int n,i,b,flag=0;
    cout << "Enter a number :";
    cin >> n;
    while (n >0)
    {   b=n%10;
        n=n/10;
        flag+=b;
    }
    cout << "Total Digit in Number is :"<< flag ; 
    }