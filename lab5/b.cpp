#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;

    for(int i = 0; i < s.size(); ++i){
        if('a' <= s[i] && s[i] <= 'z'){
            s[i] -= 32;
        }
    }
    cout << s;
    return 0;

} 