#include <bits/stdc++.h>
using namespace std;
int main(){
   string s ="abcd";
   string t ="abdc";
   cout << s.compare(t);
   // s>t  give +ve exactly s[i]-t[i]
   // s<t  give -ve exactly s[i]-t[i]
   // s==t  give 0 exactly s[i]-t[i]
return 0;
}