#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v ={1,2,2,3,3,3,3,3,4,4,5,8,9};
    int target;
    cout << "Enter the target value :: ";
    cin >> target;

    int low = 0, high = v.size() - 1, ind = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (v[mid] == target) {
            ind = mid;
            high = mid - 1;  // Continue searching on the left side
        } else if (v[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (ind != -1)
        cout << "The first occurrence is at index: " << ind << endl;
    else
        cout << "Target not found." << endl;

    return 0;
}