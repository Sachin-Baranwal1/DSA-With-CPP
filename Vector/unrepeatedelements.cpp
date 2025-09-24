#include <iostream>
#include <vector>
using namespace std;
int main(){
 int n,flag,word;
 cout << "Enter the array size is :: ";
 cin>> n;
vector <int> v(n);
vector<int> v2(n, 0);
cout << "Enter the vector element is :: ";
for(int i=0;i<n;i++){
    cin >> v[i];
}
// for(int i=0;i<n;i++ ){
//     for(int j=0;j<n;j++){
//         if(v[i]==v[j]){
//          v2[i]++;
//         }
//     }
// }
// for(int i=0;i<n;i++){
//     if(v2[i] < 2)
//     cout << v[i] <<" ";
// }
// return 0;
// }

// Another method to solve same question without using another array is ::: 

for(int i=0;i<n;i++ ){
    int count=0;
    for(int j=0;j<n;j++){
        if(i!=j and v[i]==v[j]){
         count ++;
        }
    }
    if(count ==0 )
    {
    cout << v[i] << endl;
    // break;
    }
}
}