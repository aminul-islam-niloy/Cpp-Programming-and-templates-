#include <iostream>
#include <string>

using namespace std;

bool is_palindrome(int x) {
    if (x < 0) {
        return false;
    }
    else {
        string s = to_string(x);
        string reversed_s(s.rbegin(), s.rend());
        return s == reversed_s;
    }
}

int main() {
    int x = 121;
    if (is_palindrome(x)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
    return 0;
}
