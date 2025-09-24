#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<vector<int>> v = {{0, 1, 1, 1, 1, 1}, {0, 0, 1, 1, 1, 1}, {0, 0, 0, 0, 1, 1}};
    vector<vector<int>> v = {{0, 0,0}, {0,0, 0}, {0, 0,0}};
    int n = v[0].size() - 1;
    int noo, nof = -1, ind = -1,indo;
    for (int i = 0; i < v.size(); i++)
    {
        int low = 0;
        int high = n;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (v[i][mid] == 1)
            {
                indo = mid;
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        noo = n - indo;
        if (noo > nof)
        {
            nof = noo;
            ind = i;
        }
    }

    cout << "THE maxm no of 1 in matrix is at row :: " << ind;
    return 0;
}