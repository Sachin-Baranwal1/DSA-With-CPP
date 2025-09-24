// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, m;
//     cout << "Enter the no of row :: ";
//     cin >> n;
//     cout << "Enter the no of columns :: ";
//     cin >> m;
//     int arr1[n][m], arr2[n][m], sum[n][m];
//     cout << "Enter the elements of array 1:: ";
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr1[i][j];
//         }
//     }
//     cout << "Enter the elements of array 2:: ";
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr2[i][j];
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             sum[i][j] = arr1[i][j] + arr2[i][j];
//         }
//     }
//     cout << "Sum of Element in array is ::"  << " ";
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//            cout << sum[i][j] << " ";
//         } cout << endl;
//     }
   
    
//     return 0;
// }

// Another approach without using third array
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter the no of row :: ";
    cin >> n;
    cout << "Enter the no of columns :: ";
    cin >> m;
    int arr1[n][m], arr2[n][m];
    cout << "Enter the elements of array 1:: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr1[i][j];
        }
    }
    cout << "Enter the elements of array 2:: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr2[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
             arr1[i][j] += arr2[i][j];
        }
    }
    cout << "Sum of Element in array is ::"  << " ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           cout << arr1[i][j] << " ";
        } cout << endl;
    }
   
    return 0;
}