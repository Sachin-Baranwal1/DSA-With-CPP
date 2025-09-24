#include <iostream>
#include <vector>
using namespace std;
int main(){
  int n;
    cout << "Enter the number of elements in the vector: ";
    cin >> n; 
   vector <int> v(n);
   int sume=0,sumo=0;
   cout << "Enter the elements of vector :: ";
   for(int i=0;i<n;i++){
     cin >> v[i];
   }
   for(int i=0;i<n;i++){
     if(i%2==0)
     sume+=v[i];
     else sumo+=v[i];
   }
   
 cout << "THE difference of even and odd sum of indices  is :: " << sume - sumo;

return 0;
}