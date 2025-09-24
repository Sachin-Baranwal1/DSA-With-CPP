#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter the no of rows :: ";
    cin >> n;
    vector <vector<int> > vm;
    for (int i = 1; i <= n; i++)
    {
        vector <int> v(i);
        vm.push_back(v);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
                vm[i][j]=1;
            else
            {
                vm[i][j] = vm[i-1][j] + vm[i - 1][j - 1];
            }
        }
    }
    for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << vm[i][j] << " ";
            }
            cout << endl;
        }
    
    return 0;
}