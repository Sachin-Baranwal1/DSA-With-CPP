#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
int main(){
     string s="sachin is a famous 18587 isro  01 scientist ";
     stringstream ss(s);
     string temp;
     while(ss >> temp)
     {  
        cout << temp << endl;
     }
return 0;
}