#include <iostream>
using namespace std;
int main()
{
    int m, n;
   cout << "Enter the no rows and column :: ";
     cin >> m >> n;
     int minr=0, maxr=m-1,minc=0,maxc=n-1,count=0;
     int a[m][n];
     cout << "Enter the elements of array :: ";
      for(int i=0;i<m;i++){
         for(int j=0;j<n;j++){
           cin >> a[i][j];
         }
      }
      while (count < m * n) {
        for (int i = minc; i <= maxc && count < m * n; i++) {
            cout << (a[minr][i])<< " "; // For right direction
            count++;
        }
        minr++;
        for (int i = minr; i <= maxr && count < m * n; i++) {
            cout << (a[i][maxc])<< " "; // For downward direction
            count++;
        }
        maxc--;
        for (int i = maxc; i >= minc && count < m * n; i--) {
            cout << (a[maxr][i])<< " "; // For left movement
            count++;
        }
        maxr--;

        for (int i = maxr; i >= minr && count < m * n; i--) {
            cout << (a[i][minc])<< " "; // For upward direction
            count++;
        }
        minc++;
    }
    return 0;
}