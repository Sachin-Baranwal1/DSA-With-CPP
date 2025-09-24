// Binary search only applicable on sorted array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, target;
    // cout << "Enter the size of vector :: ";
    // cin >> n;
    vector<int> v ={1,2,4,5,9,15,18,21,24};
    // cout << "Enter the elements of vector :: ";
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    // }
    cout << "Enter the target value :: ";
    cin >> target;
    int low = 0, ind;
    int high = v.size() - 1;
    bool find = false;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (v[mid] == target)
        {    ind =mid;
            break;
        }
        else if (v[mid] < target)
       { low = mid+1 ;
        ind =mid;}
        else
        {
            high = mid - 1;
            ind = mid;
        }
    }
    cout << "the lower bound is : " << v[ind-1] <<endl;
        cout << "the upper bound is : " << v[ind];
    return 0;
}