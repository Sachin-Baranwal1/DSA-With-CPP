   
#include <iostream>
using namespace std;
int main (){
    int n;
    cout << "Enter the number ";
    cin >> n;
    // int nsp=n-1;
    // int nst=1;
    for(int i=1;i<=2*n-1;i++){
      for(int j=1;j<=2*n-1;j++){
        int a=i;
        int b=j;
        if(a>n) a=2*n-i;
        if(b>n) b=2*n-j;
      int x= min(a,b);
      cout << n-x+1;
      }
  
    cout << endl;
} }
     //************************************************* */
//     for(int i=1;i<=2*n-1;i++){ 
//       for(int k=1;k<=2*n-1;k++){
//     if(i==1 || i==2*n-1 || k==1 or k==2*n-1)
//      cout << n;
//      else if(i==2 or i==2*n-2 or k==2 or k==2*n-2)
//      cout << n-1;
//      else if(i==3 or i==2*n-3 or k==3 or k==2*n-3)
//      cout << n-2;
//      else 
//      cout << n-3;
//       }
      
    
     
//     //   for(int l=1;l<=m+1-i;l++){
//     //     cout << a ;
//     //     a++;

//     // }
//     cout << endl;
// }}