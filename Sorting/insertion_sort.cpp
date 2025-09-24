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
    for (int i = 1; i < n; i++)
    {                               //int j=i;
        for (int j = i; j > 0; j--) //while(j>=1 && v[j]<v[j-1]){
        {
            if (v[j] >= v[j-1])
            {
             break;
            }
            else{
                swap(v[j],v[j-1]);
            }
        } // j--; }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}