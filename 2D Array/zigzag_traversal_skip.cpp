#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> m;
    int arr[n][m];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    vector<int> result(n); // Initialize the result vector with size n
    for (int k = 0; k < n; k++)
    {
        int i = 0, j = m - 1; // Reset i and j for each row
        if (k % 2 != 0)
        {
            while (i < j)
            {
                swap(arr[k][i], arr[k][j]);
                i++;
                j--;
            }
        }
        for (int  l = 0; l < m; l = l + 2)
        {
             result[k] = arr[k][l];
            // cout << arr[k][l]<< " ";
        }
    }

    cout << "Wave pattern result: ";
    for (int i = 0; i < n; i++)
    {
            cout << result[i] << " ";
        
    }
    cout << endl;

    return 0;
}
