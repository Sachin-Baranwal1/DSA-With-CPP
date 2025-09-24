#include <iostream>
#include <vector> 
using namespace std; 
    vector <int> v;
void pgreat(int a[],int n,int i){
    int maxi=0;
    for(int j=i-1;j>=0;j--){
     if(a[j]>maxi){
        maxi=a[j];
     }
    }
        v.push_back(maxi);
}   
int main(){
    int a[12]={0,1,0,2,1,0,1,3,2,1,2,1};
    int n=sizeof(a)/sizeof(a[0]);
     for(int i=0;i<n;i++){
     pgreat(a,n,i);
    }
 for(int i=0;i<v.size();i++){
   cout << v[i] << " ";
    }
} 