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
   
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//              sum[i][j] = arr1[j][i];
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

// Transpose of 2D matrix  without using 2nd array
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the no of row :: ";
    cin >> n;

    int arr1[n][n];
    cout << "Enter the elements of array :: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr1[i][j];
        }
    }
    for (int i = 0; i < n; i++)  
    {
        for (int j = 0; j < n; j++)   //    for (int j = i+1; j < n; j++)
        {  if(j>i)
          swap( arr1[i][j],arr1[j][i]);
        }
    }
    cout << "Transpose of Element in array is ::"  << " ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           cout << arr1[i][j] << " ";
        } cout << endl;
    }
   
    return 0;
}