#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter the no of row :: ";
    cin >> n;
    cout << "Enter the no of columns :: ";
    cin >> m;
    int arr[3][3];
    cout << "Enter the elements of array :: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum += arr[i][j];
        }
    }
    cout << "Sum of Element in array is ::" << sum;

    return 0;
}