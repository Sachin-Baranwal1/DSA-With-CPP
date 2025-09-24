#include <iostream>
using namespace std;
int main()
{
    int n, pos, x, flag = 0;
    cout << "Enter the size and value of array:";
    cin >> n >> x;
    int arr[n];
    cout << "Enter the elements :: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            flag = 1;
            pos = i;
            break;
        }
    }
    if (flag == 1)
        cout << "Find at position " << pos;
    else
        cout << "Not present!!";
    return 0;
}