// #include <iostream>
// using namespace std;
// int main(){
//     int n,m,i,j;
//     cout << "Enter the rows:: "; 
//     cin >> n;
//    // cout << "Enter the Columns:: "; 
//    // cin >> m;
//     for(i=0;i<=n;i++)
//     {
//     for(j=1;j<=i;j++)
//     cout << '*';
// cout << endl; 
//     }
// }


//***********************************************************
//Number Triangle  

#include <iostream>
using namespace std;
int main(){
    int n,m,i,j;
    cout << "Enter the rows:: "; 
    cin >> n;

    for(i=1;i<=n;i++)
    {
    for(j=1;j<=i;j++)
    cout << j;
cout << endl; 
    }
}
