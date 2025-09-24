#include <bits/stdc++.h>
using namespace std;
int main(){
     //   int n;
    //   cout << "Enter the array size :: ";
    //   cin >> n;
    //    vector<int> v(n);
    //     cout << "Enter the elements of vector :: ";
    //     for (int i = 0; i < n; i++)
    //     {
    //         cin >> v[i];
    //     }
    vector<int> v = {10, 9, 5 ,3, 1, 0};
    int low = 0, ind=-1;
    int high = v.size() - 1;
    int target = 10;
    while (low <= high)
    {  int mid =low +(high-low)/2;
        if(v[mid] == target){
            cout << "Target Found at index " << mid <<endl;
            ind =mid;
            break;
        }
        else if(v[mid] >target)
        low = mid+1;
        else high =mid-1;
    } 
    if(ind==-1)
    cout << "Target Not Found !" ;
return 0;
}