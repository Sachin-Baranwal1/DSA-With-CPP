
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
  string s;
  bool valid=false;
  getline(cin,s);
  int n = s.size();
  for(int i=0;i<=n/2;i++){
   if(s[i]==s[n-i-1])
      valid = true;
    else break;
  }
  if(valid) cout << "Pallindrome";
  else cout << "Not Pallindrome";
return 0;
}
// Another Approach
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main(){
//   string s;
//   getline(cin,s);
//   string t = s;
//   bool isPallindrome = true;     
//   reverse(s.begin(),s.end());
//   for(int i=0;i< s.size();i++){
//    if(s[i]!=t[i])
//    { 
//     cout << "Not Pallindrome ";
//     isPallindrome = false;  
//     break;
//    }

//   }
//   if(isPallindrome)
//   cout << "Pallindrome";
// return 0;
// }