#include <bits/stdc++.h>
using namespace std;
int  main (){
    string s;
    string str = "";
    char x;
    cout << "Enter the string and element to check below it ::: ";
    cin >> s >> x;
    for(int i=0;i < s.length();i++){
        if(s[i] > x)
        str += s[i];
    }
    int n = str.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(str[j]>str[j+1])
            swap(str[j],str[j+1]);
        }
    }
    cout << str << endl;
}