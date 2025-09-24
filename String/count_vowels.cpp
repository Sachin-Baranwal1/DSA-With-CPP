#include <iostream>
using namespace std;
int main(){
   string s;
   cout << "Enter the string :: ";
   cin >>  s;
   int vowels=0;
   for(int i=0;s[i]!='\0';i++){
    if( s[i]=='a' or s[i]=='e' or s[i]== 'i' or s[i]== 'o' or s[i]=='u')
    vowels++;
   }cout << "Total no of vowels is :: "<< vowels;
return 0;
}