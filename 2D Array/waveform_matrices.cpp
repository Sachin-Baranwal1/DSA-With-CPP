#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter the no of row :: ";
    cin >> n;
    cout << "Enter the no of columns :: ";
    cin >> m;
    int arr[n][m], wave[n][m];
    cout << "Enter the elements of array :: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int k = 0, j = m-1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            while (k < j)
            {
                swap(arr[i][k], arr[i][j]);
                k++;
                j--;
            }
        }
    }
    cout << "waveform of matrices is ::";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
    }

    return 0;
}