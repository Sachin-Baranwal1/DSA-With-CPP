#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter the no of rows :: ";
    cin >> n;
    vector< vector<int> > v(n, vector <int>(n)); 
    // Taking input from user
    cout << "Enter the elements in matrix :: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }
    // Taking transpose of matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j)
                swap(v[i][j], v[j][i]);
        }
    }

    // reverse the elements of matrix
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n / 2; i++)
        {
            swap(v[i][j], v[n - i - 1][j]);
        }
    }

    // Print the matrix
    cout << "The Rotated matrix is :: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}