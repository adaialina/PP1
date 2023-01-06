#include <bits/stdc++.h>
using namespace std;

bool evens_valid(string s){
    bool even = true;

    for(int i = 0; i < s.size(); ++i){
        if(s[i] != '0' && s[i] != '2' && s[i] != '4' && s[i] != '6' && s[i] != '8'){
            even = false; 
            break;
        }
    }
    return even;
}

int main(){
    string s; cin >> s;

    cout << (evens_valid(s) ? "Valid" : "Not valid");
    return 0;
}