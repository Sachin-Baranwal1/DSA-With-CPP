#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;
int main(){
   string s="hello sir sir hello";
   string temp;
//    getline(cin,s);
   stringstream news(s);
    vector <string> v; 
   while(news >> temp){
     v.push_back(temp);
   }
   sort(v.begin(),v.end());
   int maxm=0,count=1,ind;
   for(int i=0;i<v.size()-1;i++){
    if(v[i]==v[i+1]){
        count++;       
        maxm = max(maxm,count);
        ind=i;
    }
   }
   cout << v[ind]<<" is repeating maxm (" << maxm<< ") times. ";
return 0;
}