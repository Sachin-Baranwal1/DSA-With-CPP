#include <bits/stdc++.h>
using namespace std;
int main()
{
    //   int n;
    //   cout << "Enter the array size :: ";
    //   cin >> n;
    //    vector<int> v(n);
    //     cout << "Enter the elements of vector :: ";
    //     for (int i = 0; i < n; i++)
    //     {
    //         cin >> v[i];
    //     }
    vector<int> v = {0,1,2,3,4,5,6,7};
    int low = 0, ind;
    int high = v.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (v[mid] == mid)
            low = mid + 1;
        else
        {
            ind = mid;
            high = mid - 1;
        }
    }
    cout << ind << endl;
    return 0;
}
