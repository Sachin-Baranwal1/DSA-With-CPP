#include <iostream>
#include <vector>
using namespace std;
int main(){
   vector <int> v(26,0);
   string s;
   cout << "Enter a string :: ";
   getline(cin,s);
   for(int i=0;i<s.size();i++){
      v[s[i]-'a']++;
   }
   int max=0,ind;
   for(int i=0;i<v.size();i++){
      if(v[i]>max)
      {
        max=v[i];
        ind=i;
      }
   }cout << "The " << char(ind+'a')<< " is occuring " <<max <<" Times";

return 0;
}