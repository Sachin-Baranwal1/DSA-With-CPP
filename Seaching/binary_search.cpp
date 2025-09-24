// Binary search only applicable on sorted array 
#include <bits/stdc++.h>
using namespace std;
int main(){
   int n ,target;
     cout << "Enter the size of vector :: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements of vector :: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << "Enter the target value :: ";
    cin >> target;
    int low = 0,ind;
    int high = v.size()-1;
    bool find = false;
    while(low<=high){
        int mid =low + (high -low)/2;
         if(v[mid] == target){
           find = true;
           ind = mid;
            break;
            }
            else if(v[mid] < target)
            low = mid+1;
            else high = mid -1;
        }
        if(find)
        cout << "value found at index : " << ind ;
        else 
        cout << "value not found. " ;
return 0;
}