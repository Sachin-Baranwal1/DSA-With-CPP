#include <iostream>
using namespace std;
int main(){
    int n,m,i,j,a=1;
    cout << "Enter the rows:: "; 
    cin >> n;

    for(i=1;i<=n;i++)
    {
    for(j=1;j<=i;j++)
    {
        cout << a << " ";
        a++;

    }
        cout << endl; 
     }
        }
