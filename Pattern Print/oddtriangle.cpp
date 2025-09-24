
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
    for(j=1;j<=2*i-1;j+=2)
  {   
      cout << j << " ";
    
  }
cout << endl; 
    }
}

//**************************************************************** */
// Another method to solve

// #include <iostream>
// using namespace std;
// int main(){
//     int n,m,i,j;
//     cout << "Enter the rows:: "; 
//     cin >> n;
//    // cout << "Enter the Columns:: "; 
//    // cin >> m;
//     for(i=1;i<=n;i++)
//     { int a=1;
//     for(j=1;j<=i;j++)
//   {
//       cout << a << " ";
//       a=a+2;
//   }
// cout << endl; 
//     }
// }
