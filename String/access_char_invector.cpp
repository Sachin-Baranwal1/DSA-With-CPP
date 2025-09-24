#include <iostream>
#include <vector>
#include <string>

int main() {
    // Create a vector of strings
    std::vector<std::string> vec = {"hello", "world", "C++"};

    // Access the 2nd character of the 1st string
    char c = vec[0][1]; // 'e'

    std::cout << "The character is: " << c << std::endl;

    return 0;
}