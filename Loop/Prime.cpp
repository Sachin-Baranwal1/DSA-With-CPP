#include <iostream>
using namespace std;
int main(){
    int n,i,flag=0;
    cout << "Enter a Number to check prime :";
    cin >> n;
    for(i=2;i<=n-1;i++)
    if(n%i==0)
      {
        flag=1; 
        break; }
    if(flag==1)
    cout << "The Number is Not Prime !!!";
    else 
    cout << "The Number is Prime !!!";
}