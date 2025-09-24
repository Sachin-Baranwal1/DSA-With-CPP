#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    bool fact = false;
    cout << "Enter a size of vector  :: ";
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int j = 0; j < n; j++)
    {    int i;
        for ( i = 0; i < n; i++)
        {
            if (j != i && v[j] == v[i])
                break;
        }
        if (i == n)
        {
            cout << "First non repeating element is :: " << v[j];
            fact=true;
            break;
        }
    }
    if(!fact) 
    cout << "There is no repeating element in the vector. " << endl;
}