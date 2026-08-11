#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Iterative method
void check(string s) {

    // Convert to lowercase
    for (char &c : s) {
        c = tolower(static_cast<unsigned char>(c));
    }

    int len = s.length();

    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - 1 - i]) {
            cout << "It is not a palindrome" << endl;
            return;
        }
    }

    cout << "It is a palindrome" << endl;
}

// Recursive method
bool rec_chk(string s, int start, int end) {

    // Base case
    if (start >= end)
        return true;

    // Characters don't match
    if (tolower(s[start]) != tolower(s[end]))
        return false;

    // Recursive call
    return rec_chk(s, start + 1, end - 1);
}

int main() {

    cout << "Enter a string value: ";
    string s;
    cin >> s;

    cout << "\nUsing iterative method:\n";
    check(s);

    cout << "\nUsing recursive method:\n";

    if (rec_chk(s, 0, s.length() - 1))
        cout << "It is a palindrome" << endl;
    else
        cout << "It is not a palindrome" << endl;

    return 0;
}