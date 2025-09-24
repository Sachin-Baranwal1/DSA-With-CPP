#include <iostream>
using namespace std;
int main(){
    int n,m,i,j;
    cout << "Enter the rows:: "; 
    cin >> n;
   // cout << "Enter the Columns:: "; 
   // cin >> m;
    for(i=1;i<=n;i++)
    {
    for(j=1;j<n-i+1;j++)
    cout << '*';
cout << endl; 
    }
}