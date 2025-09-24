#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of array: :: ";
    cin >> n;
    vector <int> v(n);
    vector <int> sort;
    cout << "Enter the elements of array: :: ";
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    int x = v[0];
    for(int i=0;i<n;i++){
      sort.push_back(abs(v[i] - x));
    }
    bool check = true;
    for(int i=1;i<n;i++){
      if(sort[i]>=sort[i-1]){
        continue;
      }
      else {
        check =false;
          break;
        }
    }
    cout << "After updation of vector is ::" ;
    for(int i=0;i<n;i++){
        cout << sort[i] << " ";
    }
    if(check)
    cout << "Sorted array is obtained. "<< endl;
    else 
    cout << endl << "-1" ;
    
return 0;
}