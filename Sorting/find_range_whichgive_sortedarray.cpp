#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of array: :: ";
    cin >> n;
    vector <int> v(n);
    cout << "Enter the elements of array: :: ";
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    bool flag =true;
    int kmax=(float)INT_MAX,kmin= (float)INT_MIN;
    for(int i=0;i<n-1;i++){
        if(v[i] >= v[i+1] )
        kmin = max(kmin,(v[i]+v[i+1])/2);
        else 
        kmax = min(kmax,(v[i]+v[i+1]) /2);
        if(kmin > kmax){
            flag =false;
            break;
        }
    }
  if(flag == false) {
    cout << -1;
}
else if(kmin == kmax) {
    if(kmin - (int)kmin == 0) { // kmin and kmax are integers
        cout << "There is only one value of k : " << kmin;
    }
    else {
        cout << -1;
    }
}
else {
    if(kmin - (int)kmin > 0) {
        kmin = (int)kmin + 1;
    }
    cout << "Range of k is : [" << (int)kmin << "," << (int)kmax << "]";
}
 return 0;
}