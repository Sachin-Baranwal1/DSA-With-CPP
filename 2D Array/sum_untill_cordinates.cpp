#include <iostream>
using namespace std;
int main(){
  int n,m;
  cout << "Enter the no of rows and columns : ";
  cin >> n >> m;
  int a[n][m];
  cout << "Enter the elements of array : ";
  for (int i = 0; i < n; i++)
      {
          for (int j = 0; j < m; j++)
          {
              cin >> a[i][j];
          }
      }
  int l1,r1,l2,r2,result=0;
  cout << "Enter the coordinates :: ";
   cin >> l1 >>r1 >>l2 >> r2; 
   for(int i=min(l1,l2);i<=max(l1,l2);i++){
    for(int j=min(r1,r2);j<=max(r1,r2);j++){
      result+=a[i][j];
    }
   }
   cout << "The sum of rectangle formed is: " << result;
return 0;
}