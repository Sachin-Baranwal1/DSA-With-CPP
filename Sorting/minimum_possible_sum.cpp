#include <bits/stdc++.h>
using namespace std;
int main(){
      int n;
    cout << "Enter the size of vector :: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements of vector :: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int first = 0; 
    for(int i=0;i<n;i++){
       first = (first * 10) + v[i];
    }
    for(int j=n-1;j>0;j--){
        if(v[j] != v[j-1]){
            swap(v[j],v[j-1]);
            break;
        }
    }
    int second =0;
    for(int i=0;i<n;i++){
       second = (second * 10) + v[i];
    }
    cout << "First no is :: " <<first<<  endl;
    cout << "Second no is:: " << second<< endl;
    cout << "Minimum sum of both No is:: " << first+second<< endl;

return 0;
}