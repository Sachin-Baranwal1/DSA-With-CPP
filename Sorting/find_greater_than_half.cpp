#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
    cout << "Enter the size of vector :: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements of vector :: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
     for (int i = 0; i < n; i++)
    {
        int temp = INT_MAX,ind;
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
    cout << "The element occur more than n/2 is ::: " << v[n/2];
return 0;
}