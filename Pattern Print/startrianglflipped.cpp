
#include <iostream>
using namespace std;
int main(){
    int n,m,i,j;
    cout << "Enter the rows:: "; 
    cin >> n;

    for(i=1;i<=n;i++)
    {
    for(j=1;j<=n;j++)
    {if(n-i>=j)
    cout << "  ";
    else cout << " *";}
cout << endl; 
 
}
}