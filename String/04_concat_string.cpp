#include <iostream>
#include <string>
#include <vector>

using namespace std;

string concat(const string& str1, const string& str2) {
    string ans = str1 + str2; 
    return ans;
}

int main() {
    string str1 = "Hello";
    string str2 = "World";
    
    string concatenated = concat(str1, str2);
    
    cout << "Concatenated string: " << concatenated << endl;

    return 0;
}

Time Complexity: O(m+n) 
Space Complexity: O(m+n)