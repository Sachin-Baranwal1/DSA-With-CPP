#include <iostream>
using namespace std;
long long  fact(int n){
    long long y=1;
    for(int i=n;i>=1;i--)
    y=y*i;
    return y;
    
}
int main(){
    long long ncr,npr,n,r;
    cout << "Enter the value of n and r" << endl;
    cin >> n>> r;
    // npr=fact(n)/fact(n-r);
    // cout <<"The value of Permutation is "<< npr << endl;
    ncr=fact(n)/(fact(r)*fact(n-r));
    cout <<"The value of Combination is "<< ncr << endl;
   
}