#include <iostream>
#include <vector>
using namespace std;
int main(){
vector <int> v;
for(int i=0;i<6;i++){
 int x;
 cin >> x;
 v.push_back(x);
}
for(int i=0;i<6;i++){
cout << v[i] << " ";
}

//Another method to take input is 
// vector <int> v(5,99);  //size is 5 and each element get the value of 99
// for(int i=0;i<5;i++){
//     cout << v[i]<<" "; 
// }
// Output is 99 99 99 99 99
}