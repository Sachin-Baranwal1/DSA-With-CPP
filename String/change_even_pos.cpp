#include <iostream>
using namespace std;
int main(){
    string s;
    cout << "Enter the string :: ";
    cin >>  s;
    int vowels=0;
    for(int i=0;s[i]!='\0';i++){
        if(i%2==0)
        s[i]='a';
    }
    cout << "After the updation is :: "<< s;
return 0;
}