#include <iostream>
using namespace std;
int main()
{
    int r1, r2, c1, c2;
    cout << "Enter the no of row of matrix 1 :: ";
    cin >> r1;
    cout << "Enter the no of columns in matrix 1 :: ";
    cin >> c1;
    cout << "Enter the no of row of matrix 2 :: ";
    cin >> r2;
    cout << "Enter the no of columns in matrix 2 :: ";
    cin >> c2;
    if (c1 == r2)
    {
        int arr1[r1][c1], arr2[r2][c2], mul[r1][c2];
        cout << "Enter the elements of array 1:: ";
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cin >> arr1[i][j];
            }
        }
        cout << "Enter the elements of array 2:: ";
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cin >> arr2[i][j];
            }
        }

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {        int result=0;
                for (int k = 0; k < r1; k++)
                {   result+=(arr1[i][k] * arr2[k][j]);
                    mul[i][j] = result;
                }
            }
        }
        cout << "Multiplication of two array is ::" << " ";
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << mul[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
        cout << " Multiplication is not possible.";

    return 0;
}
