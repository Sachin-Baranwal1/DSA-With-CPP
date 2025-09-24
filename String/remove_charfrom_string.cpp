#include <iostream>
#include <string>
#include <algorithm> // For std::remove
using namespace std;
int main() {
    string str = "Hello, World!";
    char charToRemove = 'o';

    // Using std::remove to shift all occurrences of 'o' to the end
    auto newEnd = remove(str.begin(), str.end(), charToRemove);

    // Erase the "removed" part of the string
    str.erase(newEnd, str.end());

    cout << "Updated string: " << str << endl;

    return 0;
}


// #include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int x, y, z;
        cin >> x >> y >> z; // Input counts of 'A', 'B', and 'C'

        // Construct the string
        string str(x, 'A'); // Append 'A' x times
        str += string(y, 'B'); // Append 'B' y times
        str += string(z, 'C'); // Append 'C' z times

        // Determine the character to remove based on the highest count
        char charToRemove;
        if (x > y && x > z) {
            charToRemove = 'A';
        } else if (y > x && y > z) {
            charToRemove = 'B';
        } else {
            charToRemove = 'C';
        }

        // Remove the chosen character
        str.erase(remove(str.begin(), str.end(), charToRemove), str.end());

        // Output the size of the resulting string
        cout << str.size() << endl;
    }
    return 0;
}