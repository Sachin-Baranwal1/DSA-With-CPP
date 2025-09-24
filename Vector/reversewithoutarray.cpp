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
  int i=0;
  int j=v.size()-1,temp;
  for(int i=0,j=v.size()-1;i<=j;i++,j--){
      temp=v[i];
   v[i]=v[j];
   v[j]=temp;
  }
//   while(i<=j){
//    temp=v[i];
//    v[i]=v[j];
//    v[j]=temp;
//    i++;
//    j--;
//   }
        cout << "The reverse array is :: ";
     for(int i=0;i<v.size();i++){
    cout <<  v[i] << " ";
      }
}
