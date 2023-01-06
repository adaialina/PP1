#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int small = 0, capital = 0;

    for(int i = 0; i < s.size(); ++i){
        if('A' <= s[i] && s[i] <= 'Z'){
            capital++;
        }

        if('a' <= s[i] && s[i] <= 'z'){
            small++;
        }
    }
    cout << small << ' ' << capital;
    return 0;

} 