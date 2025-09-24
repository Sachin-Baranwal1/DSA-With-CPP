// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main(){
//   string s = "abcdef";
//   int n= s.length();
//   //cout << s.substr(4); //"ef"
//   // s.substr(index,length);
//   cout << s.substr(n/2);
// return 0;
// }

//Search for a substring
#include <iostream>
#include <string>
using namespace std;
bool containsSubstring(string & str,string & substr) {
    int n = str.size();
    int m = substr.size();

    for (int i = 0; i <= n - m; i++) {
        bool match = true;
        for (int j = 0; j < m; j++) {
            if (str[i + j] != substr[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            return true; // Substring found
        }
    }
    return false; // Substring not found
}

int main() {
    string str = "hello motooa";
    string substr = "moto";

    if (containsSubstring(str, substr)) {
        cout << "Substring found!" << endl;
    } else {
        cout << "Substring not found!" << endl;
    }

    return 0;
}