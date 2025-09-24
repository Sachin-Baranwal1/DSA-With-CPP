//count consonent in string
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
   string s = "1 box has 3 blue 4 red 6 green and 12 yellow marbles";
   // getline(cin,s);
   int n = s.size();
        vector<int> v;
        for (int i = 0; i < n; i++) {
            if (isdigit(s[i])) {
                int x = s[i] - '0';
                v.push_back(x);
            }
        }
        for (int i = 0; i < v.size(); i++) {
          cout << v[i] << " ";
        }
return 0;
}
// //count consonent in string
// #include <iostream>
// using namespace std;
// int main(){
//    string s;
//    getline(cin,s);
//    int count=0;
//    for(int i=0;i<s.size();i++){
//     if(s[i] == 'a' || s[i] == 'e' || s[i] =='i' ||  s[i]=='o' || s[i]=='u')
//     count++;
//    }
//    cout << "Total consonent in string is :: "<< s.size()-count;
// return 0;
// }

// change odd position with #

// #include <iostream>
// using namespace std;
// int main(){
//  string s;
//  getline(cin,s);
//    for (int i = 0; i < s.size(); i++)
//    {
//     if(i%2==0)
//     s[i]='#';
//    }
//    cout << s;
// return 0;
// }