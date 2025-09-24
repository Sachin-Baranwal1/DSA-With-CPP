#include <iostream>
using namespace std;
int main(){
   string s;cout << "Enter a string :: "; cin >>s;
   int count=0;
   for(int i=0;i<s.size();i++){
    if(s.length()==1)
    break;  
    else if(s[i]!=s[i-1] && s[i] != s[i+1])
     count++;
   }
   cout <<   count;
return 0;
}
