#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 2, 2, 3, 5, 5, 5, 5, 5, 6, 7, 7, 7, 8, 8, 9, 9, 9, 9};
    int low = 0;
    int high = v.size() - 1;
    int target;
    cout << "Enter the target value :: ";
    cin >> target;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (v[high] == target)
        {
            cout << "The last occurence of element is at : " << high;
            break;
        }
        if (v[mid] == target && v[mid + 1] != target)
        {
            cout << "The last occurence of element is at : " << mid;
            break;
        }
        else if (v[mid] >= target)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return 0;
}