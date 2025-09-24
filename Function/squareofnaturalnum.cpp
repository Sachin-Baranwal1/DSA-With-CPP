#include <iostream>
using namespace std;
int square(int n){
    int num;
    num=n*n;
    return num;
}
int main(){
  int n,sqr;
  cout << "Enter the number upto which you want to print :: ";
  cin >>  n;
  for(int i=1;i<=n;i++){
      sqr=square(i);
      cout << sqr << endl;;
  }
 return 0;
 }