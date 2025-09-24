#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, flag = 0, word, x;
    cout << "Enter the array size is :: ";
    cin >> n;
    string s="";
    cout << "Enter the target value :: ";
    cin >> x;
    vector<int> v(n);
    cout << "Enter the vector element is :: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {    int sum= v[i] + v[j] + v[k];
                if ( sum== x)
                    {
                        flag++;
                        cout << v[i] << v[j] << v[k] <<endl;
                    }

            }
        }
    }  cout << flag << endl;
}