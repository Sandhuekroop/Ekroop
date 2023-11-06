#include <iostream>
using namespace std;

void powerset(string s, int i, string cur) {
    if (i == s.length()) {
        cout << cur << endl;
        return;
    }
    powerset(s, i + 1, cur + s[i]);
    powerset(s, i + 1, cur);
}

int main() {
    string input = "abc";  // Replace with your desired string
    powerset(input, 0, "");
    return 0;
}
