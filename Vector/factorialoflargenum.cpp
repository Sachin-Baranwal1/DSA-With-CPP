#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, fact = 1;
    cout << "Enter a number for factorial :: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    vector<int> v;
    while (fact != 0) {
        int last = fact % 10;
        fact /= 10;
        v.push_back(last);
    }

    
    for (int i = v.size()-1; i>=0; i--) {
        cout << v[i];
    }
    cout << endl;

    return 0;
}
