#include <iostream>
#include <string>
using namespace std;
int main() {
    string str = "hello motooa";
    string substr = "moto";

    // Check if substr exists in str
    if (str.find(substr) != string::npos) {
        cout << "Substring found!" << endl;
    } else {
        cout << "Substring not found!" << endl;
    }

    return 0;
}