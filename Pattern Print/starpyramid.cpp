#include <iostream>
using namespace std;
int main (){
    int n;
    cout << "Enter the number ";
    cin >> n;
    for(int i=0;i<n;i++){
      for(int j=0;j<n-i+1;j++){
     cout << " ";
      }
        
      for(int k=0;k<2*i-1;k++){
        cout << '*' ;
    }
    //   for(int l=1;l<=i;l++){
    //     if(l==1)
    //     continue;
    //     cout << '*' ;
    // }
    cout << endl;
}}