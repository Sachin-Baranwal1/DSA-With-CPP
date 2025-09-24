#include <bits/stdc++.h>
using namespace std;
int main(){
  int n ,target;
    //  cout << "Enter the size of vector :: ";
    // cin >> n;
    // vector<int> v(n);
     vector<int> v = {1,2,2,3,3,3,4,4,4,4,5,5,9};
    // cout << "Enter the elements of vector :: ";
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    // }
    cout << "Enter the target value :: ";
    cin >> target;
    int low = 0,ind;
    int high = v.size()-1;
    bool flag = false;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(v[mid] == target){
            if(v[mid+1] != target){
                flag = true;
                ind =mid;
                break;
            }
            else{
                low =mid+1;
            }
        }
        else if(v[mid] > target){
            high = mid -1;
        }
        else low =mid+1;
        
    }
    if(flag) cout << "found at index : "<< ind;
    else cout << -1 <<endl;
return 0;
}