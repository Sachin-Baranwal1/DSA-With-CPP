#include <iostream>
using namespace std;
int main()
{
    int arr[] = {95, 34, 77, 546, 56, 87, 53, 14, 25, 21, 74, 34, 53};
    int n;
    n = sizeof(arr) / sizeof(arr[0]);
    cout << n << " ";

    return 0;
}