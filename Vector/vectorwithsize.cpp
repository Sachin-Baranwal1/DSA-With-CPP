#include <iostream>
#include <vector>
using namespace std;
int main(){
 vector<int>v(5);
 v.push_back(9);
 v.push_back(2);
 v.push_back(4);
 cout << v.size()<< endl;
 cout << v.capacity()<<endl;
 cout << v[7];

return 0;
}