#include <iostream>
using namespace std;
int greatestdiv(int num1,int num2){
     int a;    
    for(int i=min(num1,num2);i>=2;i--)
    {
        if(num1%i==0 && num2%i==0)
       { a=i;
        break;
    }}
    cout << a;
}
// int greatestdiv(int num1,int num2){
//      int a;    
//     for(int i=2;i<=min(num1,num2);i++)
//     {
//         if(num1%i==0 && num2%i==0)
//         a=i;
//     }
//     cout << a;
// }
int main(){
    int num1,num2;
 cout << "Enter a numbers::" << endl;
 cin >> num1 >> num2 ;
 greatestdiv(num1,num2);
return 0;
}