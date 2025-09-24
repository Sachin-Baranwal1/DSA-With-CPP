#include <iostream>
using namespace std;

int main() {
    int m, n, x;
    cout << "Enter number of rows and columns: ";
    cin >> m >> n;
    
    int arr[m][n]; 
    cout << "Enter elements of the matrix:" << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Enter target value: ";
    cin >> x;

    // Binary search on every row
    for(int i = 0; i < m; i++) {
        int lo = 0, hi = n - 1;
        int firstIdx = -1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (arr[i][mid] == x) {
                if (mid == 0 || arr[i][mid - 1] != x) {
                    firstIdx = mid;
                    break;
                } else {
                    hi = mid - 1;
                }
            } else if (arr[i][mid] < x) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        if (firstIdx == -1)
            cout << "Row " << i + 1 << ": Not found" << endl;
        else
            cout << "Row " << i + 1 << ": First occurrence at index " << firstIdx << endl;
    }

    return 0;
}