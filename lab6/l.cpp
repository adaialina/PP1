#include <bits/stdc++.h>
using namespace std;

bool valid_string(string s, int n){
    bool valid = false;
    int cnt = 0;

    for(int i = 0; i < s.size(); ++i){
        if(s[i] >= '0' && s[i] <= '9' ){
            cnt++;
        }
        else{
            cnt = 0;
        }
        if(cnt == n){
            valid = true;
            break;
            }
    }
    return valid;
}

int main(){
    string s; cin >> s;
    int n; cin >> n;

    cout << (valid_string(s, n) ? "Valid" : "Not valid");
    return 0;
}