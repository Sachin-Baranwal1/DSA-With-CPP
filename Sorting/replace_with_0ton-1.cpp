// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the size of vector :: ";
//     cin >> n;
//     vector<int> v(n);
//     vector<int> check(n, 0);
//     cout << "Enter the elenments of vector ::";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     int x = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int minm = INT_MAX, idx = -1;
//         for (int j = 0; j < n; j++)
//         {
//             if (v[j] < minm && check[j] == 0)
//             {
//                 minm = v[j];
//                 idx = j;
//             }
//         }
//         v[idx] = x;
//         check[idx] = 1;
//         x++;
//     }
//     cout << "After the updation of vector :: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << v[i] << " ";
//     }
//     return 0;
// }
  
// Another approach for it without using extra array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of vector :: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elenments of vector ::";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        int minm = INT_MAX, idx = -1;
        for (int j = 0; j < n; j++)
        {
            if (v[j] < minm && v[j] > 0)
            {
                minm = v[j];
                idx = j;
            }
        }
        v[idx] = -x;
        x++;
    }
    cout << "After the updation of vector :: ";
    for (int i = 0; i < n; i++)
    {    v[i] = -v[i];
        cout << v[i] << " ";
    }
    return 0;
}