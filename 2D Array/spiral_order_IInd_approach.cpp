#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "Enter the no of rows :: ";
    cin >> n;
    int a[n][n];

    int i = 0; 
    int k = 1;

    while (k <= n * n) {
        // left to right
        int j = i;
        while (j < n - i) {
            a[i][j++] = k++;
        }

        // top to bottom
        j = i + 1;
        while (j < n - i) {
            a[j++][n - i - 1] = k++;
        }

        // right to left
        j = n - i - 2;
        while (j > i) {
            a[n - i - 1][j--] = k++;
        }

        // bottom to top
        j = n - i - 1;
        while (j > i) {
            a[j--][i] = k++;
        }
        i++;
    }
    
    cout << "The spiral fill of n*n matrix is :: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
