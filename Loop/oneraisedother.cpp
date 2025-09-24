 #include <iostream>
 #include <math.h>

using namespace std;
int main(){
    int n1,i,n2,flag=0;
    float y=1;
    cout << "Enter the base " << "And exponent  : " ;
    cin >> n1 >> n2;
    y=powf(n1,n2);
    if (n2<0){
        flag =1;
         n2=-n2;
   }
    if(flag==1){
      y=1/y;}
    cout << n1 << " is raised to the power " << n2 << " is " << y;}




//  #include <iostream>
//  #include <math.h>

// using namespace std;
// int main(){
//     int n1,i,n2,y;
//     cout << "Enter the base " << "And exponent  : " ;
//     cin >> n1 >> n2;
//     y=powf(n1,n2);
//     cout << n1 << " is raised to the power " << n2 << " is " << y;}