#include <iostream>
using namespace std;
int main (){
    int n;
    cout << "Enter the number ";
    cin >> n;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n-i+1;j++){
     cout << " ";
      }
        
      for(int k=1;k<=i;k++){
        cout << k ;
    }
      for(int l=i-1;l>=1;l--){
        // if(l==1)
        // continue;
        cout << l ;
    }
    cout << endl;
}}