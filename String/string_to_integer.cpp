#include <iostream>
using namespace std;
int main(){
    string s;
    int n = 0;
    cout << "Enter a string: ";
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(s[i] >= '0' && s[i] <= '9'){
        n = n*10 + (s[i]-'0');
        }
    }
    cout << "Integer value: " << n << endl;
return 0;
}