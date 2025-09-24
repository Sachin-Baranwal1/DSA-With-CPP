#include <iostream>
using namespace std;
int main(){
    int n, m,row=0,rown;
    cout << "Enter the no of row :: ";
    cin >> n;
    cout << "Enter the no of columns :: ";
    cin >> m;
    int a[n][m];
    cout << "Enter the elements of array 1:: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {   int sum=0;
        for (int j = 0; j < m; j++)
        {
             sum += a[i][j];
        }
        if(sum>row){
            row=sum;
            rown= i+1;
        }
    }
    cout << "The maxm sum of row is : ";
    cout << rown << endl;
return 0;
}
