#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter the no of row :: ";
    cin >> n;
    cout << "Enter the no of columns :: ";
    cin >> m;
    int a[n][m], wave[n][m];
    cout << "Enter the elements of array :: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (i % 2 != 0)
        {
            for (int j = m - 1; j >= 0; j--)
            {
                cout << a[i][j] << " ";
            }
        }
        else
        {
            for (int j = 0; j < m; j++)
            {
                cout << a[i][j] << " ";
            }
        }
    }
}