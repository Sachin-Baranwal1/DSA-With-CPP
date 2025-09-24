#include <iostream>
using namespace std;
int main(){
    int n,i,j;
        cout << "Enter the rows:: "; 
    cin >> n;
    for(i=1;i<=n;i++)
    {
    for(j=1;j<=n;j++)
{
    if(j==((n/2)+1)  || i==((n/2)+1))
    cout <<"*";
    else cout <<" ";
}
cout << endl; 
    }
}