#include<iostream> 
using namespace std; 
 
int main() { 
    string s; cin >> s;

    bool order = true;

    for (int i = 1; i < s.size(); ++i) {
        if (s[i - 1] > s[i]) {
            order = false;
            break;
        }
    }

    cout << (order ? "YES" : "NO") << endl;
}