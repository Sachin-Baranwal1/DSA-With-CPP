#include <iostream>
#include <vector>
using namespace std;
int main(){
  vector <string> v = {"0123","0023","456","00182","940","2903"};
   int maxm=0,ind;
   for (int i = 0; i < v.size(); i++){
    int x =stoll(v[i]); 
    if(x>maxm)
    {
        maxm = x;
        ind = i;
    }
   }
    cout << "The maxm number is : " << v[ind] << " at index " << ind+1;
   
return 0;
}