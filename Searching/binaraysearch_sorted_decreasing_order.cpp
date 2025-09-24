#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v = {82,67,59,51,49,40,36,29,24,16,8,1};
    int low=0;
    int high =v.size()-1;
    int target;
    bool find =false;
    cout <<"Enter the target value :: ";
    cin >> target;
    while(low<=high){
    int mid = low +(high-low)/2;
    if(target==v[mid]){
        find =true;
        break;
    }
    else if(v[mid]>target){
        low = mid+1;
    }
    else 
    high = mid-1;
    }
    if(find)
    cout << "The ans is found :: " << target;
    else cout << "Element is not found. ";
return 0;
}