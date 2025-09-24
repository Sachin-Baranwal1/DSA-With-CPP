#include <bits/stdc++.h>
using namespace std;
int main(){
     int n;
    cout << "Enter the size of vector :: ";
    cin >> n;
    vector<string> v(n);
    cout << "Enter the string in vector :: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
       for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size()-1;j++){
            if(v[j] > v[j+1]){
                swap(v[j],v[j+1]);
            }
        }}
        cout << "The sorted vector is:: ";
        for(int i=0;i<v.size();i++){
            cout << v[i]<<" ";
        }
       
return 0;
}