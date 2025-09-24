// Approach 1
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout << "Enter a sentnce to check lexicographically :: ";
    getline(cin, s);
    string word = "", maxword = "";
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ' ')
        {
            maxword = max(maxword, word); // maxfuncn compare on a basis of lexicographical or dictionary word
            word = "";
        }
        else
            word += s[i];
    }
    maxword = max(maxword, word);
    cout << maxword << endl;
}

// Approch 2

// #include <iostream>
// #include <sstream>
// #include <vector>
// using namespace std;
// int main(){
//    string s;
//    getline(cin,s);
//    stringstream ss(s);
//    vector  <string> v;
//    string temp;
//    while (ss>>temp)
//    {
//     v.push_back(temp);
//    }
//    int n = s.size();
//    string t = "!";
//    for (int  i = 0; i < v.size(); i++)
//    {   
//     int x= v[i].size();
//     int y = t.size();
//      if(v[i][0] > t[0])
//         t = v[i];
//      else if(v[i][x-1] > t[y-1])
//        t = v[i];
//    }
//    cout << t ;
// return 0;
// }