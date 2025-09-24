#include <iostream>
#include <vector>
using namespace std;
int main(){
 vector <int> v;
 int target,index=0;
 cout << "Enter the targeted value is:: ";
 cin >> target;
 for(int i=0;i<5;i++){
    int x;
    cin >> x;
    v.push_back(x);
 }
 for(int i=v.size()-1;i>=0;i--){
    if(v[i]==target){
    index=i;
    break;
    }
 }
cout << "The last occurence  is :: "<< index;
return 0;
}
// Another method is ::
// #include <iostream>
// #include <vector>
// using namespace std;
// using namespace std;
// int main(){
//  vector <int> v(100,9);
//  int target,index;
//  cout << "Enter the targeted value is:: ";
//  cin >> target;
// //  for(int i=0;i<5;i++){
// //     int x;
// //     cin >> x;
// //     v.push_back(x);
// //  }
//  for(int i=0;i<v.size();i++){
//     v[i]==target;
//     index=i;
//  }
// cout << "The last occurence  is :: "<< index;
// return 0;
// }