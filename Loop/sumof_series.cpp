#include <iostream>
using namespace std;
int main(){
    int n,i,sum,flag=0;
    cout << "Enter the Number : ";
    cin >> n;
    if(n%2==0)
    sum=-n/2;
    else 
    sum=-n/2+n;
    cout << "The Sum of series is :"<< sum;
}
// #include <iostream>
// using namespace std;
// int main(){
//     int n,i,sum=0,flag=0;
//     cout << "Enter a number :";
//     cin >> n;
//     for (i=1;i<=n;i++){
//     if (i%2==0)
//     sum-=i;
//     else 
//     sum+=i;}
//     cout << "The Sum of series is :"<< sum;
// }