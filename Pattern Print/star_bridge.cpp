#include <iostream>
using namespace std;
int main (){
    int n;
    cout << "Enter the number ";
    cin >> n;
    for(int i=1;i<=n;i++){
      for(int k=1;k<=n-1;k++){
    { if(i+k<=n+1)
     cout << "*";
     else
     cout << " ";
      }
        
    //     cout << '*' ;
    }
      for(int l=1;l<i;l++){
        cout << " " ;
    }
    
      for(int l=i;l<=n;l++){
        cout << '*' ;
    }
    cout << endl;
}}