#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t; cin >> s >> t;

    cout << (s.find(t) != string :: npos ? "YES" : "NO") << endl;
}