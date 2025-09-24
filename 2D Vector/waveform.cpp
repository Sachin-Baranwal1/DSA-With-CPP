#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter the no of rows & column:: ";
    cin >> m >> n;
    int v[m][n];
    // Taking input from user
    cout << "Enter the elements in matrix :: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }
    // Taking reverse of even column of matrix
    for (int k = 0; k < n; k++)
    {
        if (k % 2 == 0)
        {
            int i = 0, j = m - 1;
            while (i < j)
            {
                swap(v[i][k], v[j][k]);
                i++;
                j--;
            }
        }
    }

    // Print the matrix
    cout << "The Waveform of matrix is :: " << endl;
    for (int i = 0; i < m-1; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout << v[j][i] << " ";
        }
    }
    return 0;
}