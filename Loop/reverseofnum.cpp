#include <iostream>
using namespace std;
int main(){
    int n,i,b,rev=0;
     cout << "Enter a number :";
    cin >> n;
    while (n >0){
   b=n%10;
   n/=10;
rev=rev*10+b;
    }
    cout << "The Reverse of Number is :" << rev;
}