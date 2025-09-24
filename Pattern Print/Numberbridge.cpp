#include <iostream>
using namespace std;
int main (){
    int n=5;
    // cout << "Enter the number ";
    // cin >> n;
    int m=n-1;
    int nsp =1;
    
    for(int i=1;i<=m;i++){
         int a=1;
      for(int k=1;k<=m+1-i;k++){
    
     cout << a;
     a++;
      }
        
    //     cout << '*' ;
    
      for(int l=1;l<=nsp;l++){
        cout << " " ;
        a++;
    }
    nsp+=2;
 
      for(int l=1;l<=m+1-i;l++){
        cout << a ;
        a++;

    }
    cout << endl;
}}