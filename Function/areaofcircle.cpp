#include <iostream>
using namespace std;
float area(int rad){
    float num=3.14;
    return num*rad*rad;
}
int main(){
  float r,sqr;
  cout << "Enter the Radius :: ";
  cin >>  r;
      sqr=area(r);
      cout << sqr << endl;;
  }

 