//  Armstrong Number 
#include <iostream>
using namespace std;
int main (){
    int n,rev=0,b;
    cout << "Enter the number ";
    cin >> n;
    for(int i=1;i<=n;i++){
        b=i;
        int sum=0;
        while(b!=0){
        int a=b %10;
        sum+=(a*a*a);
        b=b/10;}
         if(sum==i)
          cout<< i << endl ;}
               
                  }
/// Fibonacci Series 
// #include <iostream>
// using namespace std;
// int main (){
//     int n,sum=0,rev=0,b=1,a=0,c;
//     cout << "Enter the number ";
//     cin >> n;
//     cout<< a << endl;
//     cout<< b << endl;
//     for(int i=1;i<=n;i++){
//         c=a+b;
//         a=b;
//         b=c;
//     cout << c << endl;
// }}


// #include <iostream>
// using namespace std;
// int main (){
//     int n,#sum=0,rev=0;
//     cout << "Enter the number ";
//     cin >> n;
//     for(int i=1;n!=0;i++){
//         int a=n%10;
//         sum+=a;
//         n=n/10;
//         rev=(rev*10)+a;

//     }
//     cout << "The sum of Num is::" << sum << endl;
//     cout << "The rev of Num is::"<< rev << endl;
//     }

    //Sum of even number 
// #include <iostream>
// using namespace std;
// int main (){
//     int n,sum=0;
//     cout << "Enter the number ";
//     cin >> n;
//     for(int i=0;i<=n;i++){
//         int a=n%10;
//         if(a%2==0)
//         sum+=a;
//         n=n/10;
//     }
//     cout << sum;}