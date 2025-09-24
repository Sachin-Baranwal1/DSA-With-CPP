#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int n;
    // cout << "Enter the size of vector :: ";
    // cin >> n;
    vector<int> v = {0,0,0,0,0,0,1,1,1,1,1,1,1};
    // cout << "Enter the elements of vector :: ";
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    // }
    int n = v.size();
    int ind;
    int low = 0;
    int high = v.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (v[mid] == 1)
        {
            ind = mid;
            high = mid - 1;
        }
        else if (v[mid] < 1)
            low = mid + 1;
        else
            high = mid - 1;
    }
    cout <<"The total no of 1 in array is :: "<< n-ind << " ";

    return 0;
}