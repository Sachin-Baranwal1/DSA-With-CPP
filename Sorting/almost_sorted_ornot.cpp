// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the size of vector :: ";
//     cin >> n;
//     vector<int> v(n);
//     cout << "Enter the elements of vay: :: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     bool flag = true;
//     int idx;
//     for (int i = 0; i < n; i++)
//     {   int maxx = INT_MAX;
//         for (int j = i; j < n; j++)
//         {
//             if (v[j] < maxx)
//             {
//                 maxx = v[j];
//                 idx = j;
//             }
//         }
//         if (abs(i - idx) <= 1)
//             continue;
//         else
//         {
//             flag = false;
//             break;
//         }
//     }
//     if (flag)
//         cout << "Vector is almost sorted. ";
//     else
//         cout << "It is not almost sorted.  ";
//     return 0;
// }

// Using extra space only
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the size of vector :: ";
//     cin >> n;
//     vector<int> v(n);
//     cout << "Enter the elements of vector :: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     vector<int> brr(n);
//     for (int i = 0; i < n; i++)
//     {
//         brr[i] = v[i];
//     }
//     sort(v.begin(), v.end());
//     // v 2 4 7 8 9
//     bool flag = true;
//     for (int i = 0; i < n; i++)
//     {
//         if (i == 0)
//         {
//             if (brr[i] != v[i] && brr[i] != v[i + 1])
//             {
//                 flag = false;
//                 break;
//             }
//         }
//         else if (i == n - 1)
//         {
//             if (brr[i] != v[i] && brr[i] != v[i - 1])
//             {
//                 flag = false;
//                 break;
//             }
//         }
//         else
//         {
//             if (brr[i] != v[i] && brr[i] != v[i - 1] && brr[i] != v[i + 1])
//             {
//                 flag = false;
//                 break;
//             }
//         }
//     }
//     if (flag)
//         cout << "Vector is almost sorted. ";
//     else
//         cout << "It is not almost sorted.  ";
//     return 0;
// }

// Third Approach in O(n) complexity
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of vector :: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements of vector :: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // v 2 4 7 8 9
    for (int i = 0; i < n; i++)
    {
        if (v[i] > v[i + 1])
        {
            swap(v[i], v[i + 1]);
            i++;
        }
    }

    bool flag = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "Vector is almost sorted. ";
    else
        cout << "It is not almost sorted.  ";
    return 0;
}
