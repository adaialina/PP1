#include<iostream>

using namespace std;

bool palind(string s, int i) {
    if (i == s.size()) {
        return true;
    }

    return s[i] == s[s.size() - 1 - i] && palind(s, i + 1);
}

int main() {
    string s; cin >> s;

    cout << (palind(s, 0) ? "Yes" : "No") << endl;
}