#include <iostream>
#include <algorithm>  // Required for std::swap
using namespace std;

void permute(string s, int l, int r) {
    if (l == r) {
        cout << s << endl;
        return;
    }
    for (int i = l; i <= r; i++) {
        swap(s[l], s[i]);  // Use std::swap to swap characters
        permute(s, l + 1, r);
        swap(s[l], s[i]);  // Undo the swap to backtrack
    }
}

int main() {
    string input = "abc";  // Replace with your desired string
    permute(input, 0, input.length() - 1);
    return 0;
}
