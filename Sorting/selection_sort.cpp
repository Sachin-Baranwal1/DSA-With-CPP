#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, ind;
    cout << "Enter the size of vector :: ";
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        int temp = INT_MAX;
        for (int j = i; j < n; j++)
        {
            if (v[j] < temp)
            {
                temp = v[j];
                ind = j;
            }
        }
        swap(v[i], v[ind]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}