#include <iostream>
using namespace std;
int main(){
 int n,count=0,x;
 cout << "Enter the size of array and value greater than x :: ";
 cin >> n >> x;
 int a[n];
 cout << "Enter the elements of array :: ";
 for(int i=0;i<n;i++){
    cin >> a[i];
 }
 for(int i=0;i<n;i++){
    if(a[i]> x){
        count++;
    }
 }
 cout << "Total greater than x is :: "<< count;
return 0;
}