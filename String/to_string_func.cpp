#include <iostream>
using namespace std;
int main(){
   // to_string func is used to convert integer into string
   int x = 21265;
   string s = to_string(x);
   cout << s<< endl;
   cout << "The size of string is :: "<< s.length();
return 0;
}