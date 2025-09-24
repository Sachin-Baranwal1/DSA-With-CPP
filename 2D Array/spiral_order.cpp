#include <iostream>
using namespace std;
int main(){
    int n;cout << " Enter the no of rows :: ";
    cin  >> n;
    int v[n][n];
    // Taking input from user
    int maxr=n-1,maxc=n-1,minr=0,minc=0,count=1;
    int vf[n][n];
    while(count <= n*n){
        //For right direction 
        for(int i=minc;i <= maxc;i++){
           v[minr][i] = count;
           count++;
        }
        minr++;
        //For downward direction 
        for(int i=minr;i <= maxr;i++){
           v[i][maxc] = count;
           count++;
        }
        maxc--;
        //For left direction 
        for(int i=maxc;i >= minc;i--){
           v[maxr][i] = count;
           count++;
        }
        maxr--;
        //For upward direction 
        for(int i=maxr;i >= minr;i--){
           v[i][minc] = count;
           count++;
        }
        minc++;
    }

    cout << "The spiral fill of n*n matrix is :: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
return 0;
}

