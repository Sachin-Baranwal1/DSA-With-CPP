#include <iostream>
using namespace std;
int main(){
    int n,i,flag=0;
    cout << "Enter a number :";
    cin >> n;
    if (n==0)
cout << "1";
else {
    while (n >0)
    {
        n=n/10;
        flag++;
    }
    cout << "Total Digit in Number is :"<< flag ; 
    }}