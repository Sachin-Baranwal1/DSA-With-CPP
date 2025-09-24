// #include <iostream>
// using namespace std;
// int main(){
//     int n,m,i,j;
//     cout << "Enter the rows:: "; 
//     cin >> n;
//     for(i=1;i<=n;i++)
//     { 
//     for(j=65;j<=65+n;j++)
//   {   
//       cout << (char)j << " ";
    
//   }
// cout << endl; 
//     }
//}

//*********************************************************************** */
// OR Another method is 
#include <iostream>
using namespace std;
int main(){
    char n,m,i,j;
    cout << "Enter the rows:: "; 
    cin >> n;
    for(i='A';i<=n;i++)
    { 
    for(j='A';j<=n;j++)
  {   
      cout << (char)j << " ";
    
  }
cout << endl; 
    }
}
