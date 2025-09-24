#include <iostream>
#include <vector>
using namespace std;

int binarySearchInfiniteArray(const vector<int>& v, int target) {
    int low = 0;
    int high = 1;

    // Expand the window until v[high] >= target or we reach the end
    while (v[high] < target) {
        low = high;
        high = high * 2;
        if (high >= v.size()) high = v.size() - 1;  // To avoid out-of-bounds
    }

    // Now do binary search in the found range
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (v[mid] == target) return mid;
        else if (v[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;  // Not found
}

int main() {
    vector<int> v = {2, 5, 8, 10, 14, 18, 21, 25, 30, 35, 40}; // example array

    int target = 10;
    int index = binarySearchInfiniteArray(v, target);

    if (index != -1)
        cout << "Target found at index " << index << endl;
    else
        cout << "Target not found!" << endl;

    return 0;
}
