#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
    string s;
    cin >> s;

    unordered_set<char> unique_chars(s.begin(), s.end());

    if (unique_chars.size() % 2 == 0) {
        cout << "CHAT WITH HER!\n";
    } else {
        cout << "IGNORE HIM!\n";
    }

    return 0;
}