#include <iostream>
using namespace std;
long long  fact(int n){
    long long y=1;
    for(int i=n;i>=1;i--)
    y=y*i;
    return y;
}
int combination(int n,int r){
   int ncr;
       ncr=fact(n)/(fact(r)*fact(n-r));
       return ncr;

}
int main(){
    int n,r;
        cout << "Enter the value upto which row you want to print " << endl;
        cin >> n;
        for(int i=0;i<=n;i++){
            for(int k=n;k>i;k--)
            cout << " ";
            for(int j=0;j<=i;j++){
               cout << combination(i,j) << " ";
            }
            cout << endl;
        }
}