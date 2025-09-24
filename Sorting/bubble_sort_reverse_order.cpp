#include <bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cout << "Enter the size of vector :: ";
   cin >> n;
   vector <int> v(n);
     cout << "Enter the elements of array: :: ";
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    bool  flag =true;
    for(int i=0;i<n-1;i++){
        for(int j=n-1;j>0;j--){
            if(v[j] > v[j-1] ){
                swap(v[j],v[j-1]);
                flag =false;
            }
        }
        if(flag == true)
        break;
    }
    cout << "After the updation of vector :: ";
    for(int i=0;i<n;i++){
        cout << v[i] << " ";
    }

return 0;
}