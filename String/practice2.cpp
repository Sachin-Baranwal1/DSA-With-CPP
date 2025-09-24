#include <bits/stdc++.h>
using namespace std;

int main() {
          int n;
          string s;
          cin >>s; 
          int x= s.size();
          int count =0;
          if(x<9) cout << 8-x <<endl;
          else {
              for(int i=0;i<x;i++){
               if(s[i]>= 'a' && s[i]<='z')
               count++;
               break;
              }
              for(int i=0;i<x;i++){
               if(s[i]>= 'A' && s[i]<='Z')
               count++ ;
               break;
              }
               if(count == 2 )
               cout << 1 << endl;
               else
              cout <<  3-count <<endl;
          
      }

}


// //count consonent in string
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main(){
//    string s;
//    getline(cin,s);
//    string t = s;
//    int n = s.size();
//    reverse(s.begin(),s.end());  
//     t+=s;
//     cout << t << endl;
// return 0;
// }

//second largest no in string
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main(){
//    string s;
//    getline(cin,s);
//    char max = '!';
//    char smax= '!';
//    int n = s.size();
//    for (int  i = 0; i < n; i++)
//    {
//        if(s[i]>max)
//        {
//             smax = max;
//             max = s[i];
//         }
//         else if(smax < s[i] and max!= s[i]) smax= s[i];
//        }
//     if(smax == '!') cout <<"No second largest string";   
//     cout << smax << endl;
// return 0;
// }