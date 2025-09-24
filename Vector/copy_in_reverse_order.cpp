#include <iostream>
#include <vector>
using namespace std;
int main(){
 vector <int> v;
   v.push_back(4);
   v.push_back(7);
   v.push_back(2);
   v.push_back(0);
   v.push_back(3);
   v.push_back(2);
   v.push_back(8);
   v.push_back(9);
 vector <int> vr(v.size());
   int size=v.size()-1;
   for(int i=0;i<v.size();i++){
    vr[size]=v[i];
        size--;
      }
       cout << "The array is :: ";
   for(int i=0;i<vr.size();i++){
    cout  << v[i]<<" ";
      }
    cout << endl;
        cout << "The reverse array is :: ";
     for(int i=0;i<vr.size();i++){
    cout <<  vr[i] << " ";
      }
}
