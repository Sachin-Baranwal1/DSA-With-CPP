#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the no of row :: ";
    cin >> n;

    int arr1[n][n];
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) //    for (int j = i+1; j < n; j++)
        {
            if (j > i)
                swap(arr1[i][j], arr1[j][i]);
        }
    }
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        for (int k = 0; k < n; k++)
        {
            swap(arr1[k][i], arr1[k][j]);
        }
        i++;
        j--;
    }
    cout << "Transpose of Element in array is ::" << " ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}