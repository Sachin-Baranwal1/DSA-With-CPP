#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int n;
    // cout << "Enter the size of vector :: ";
    // cin >> n;
    vector<int> v = {1, 1,2, 3, 4, 5, 6, 7, 8, 9};
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
        if (v[mid] == mid)
        {
            ind = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    cout << "The repeated element is :: " << ind;
    return 0;
}