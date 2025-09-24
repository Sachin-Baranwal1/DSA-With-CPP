#include <iostream>
#include <vector>
using namespace std;
int main(){
 vector <int> v;
 int index1,index2;
  int target;
 cout << "Enter the targeted value is:: ";
 cin >> target;
   v.push_back(4);
   v.push_back(7);
   v.push_back(2);
   v.push_back(0);
   v.push_back(3);
   v.push_back(2);
   v.push_back(8);
   v.push_back(9);
 int sum=0;
 for(int i=0;i<v.size();i++)
    cout << v[i] << " " ;
    cout << endl;
        for(int i=0;i<v.size();i++){
            for(int j=i+1;j<v.size();j++){
               sum=v[i]+v[j];
               if(sum==target)
                 cout << i <<" " << j <<endl;
          }
        }
}