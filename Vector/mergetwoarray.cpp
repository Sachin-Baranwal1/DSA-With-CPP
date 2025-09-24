#include <iostream>
#include <vector>
using namespace std;
vector <int> merge(vector <int> v1,int m,vector <int> v2,int n){
    vector <int> res(m+n);
    int i=0,j=0,k=0;

 while(i<=m-1 && j<=n-1){
     if(v1[i]<v2[j]){
       res[k]=v1[i];
       k++;
       i++;
     }
     else 
     {
       res[k]=v2[j];
       k++;
       j++;
     }}
    if(i==m){
     while(j != n){
        res[k]=v2[j];
        k++;
        j++;
     }
    }
     if(j==n){
        while(i !=m){
        res[k]=v1[i];
        k++;
        i++;
     }
     }
  return res;
}
int main(){
 vector <int> v1;
 v1.push_back(1);
 v1.push_back(4);
 v1.push_back(5);
 v1.push_back(7);
 v1.push_back(8);
   for(int i=0;i<v1.size();i++)
        cout << v1[i] << " ";
        cout << endl ;
 vector <int> v2;
 v2.push_back(2);
 v2.push_back(3);
 v2.push_back(6);
 v2.push_back(7);
 v2.push_back(10);
 for(int i=0;i<v2.size();i++)
        cout << v2[i] << " ";
        cout << endl ;
  int m=v1.size();
 int n=v2.size();
 vector <int> resultant=merge(v1,m,v2,n);   
     for(int i=0;i<resultant.size();i++){
        cout << resultant[i] << " ";
     }   
return 0;
}