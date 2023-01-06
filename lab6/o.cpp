#include <bits/stdc++.h>
using namespace std;

bool lucky_ticket(string s){
    int cnt = 0;

    for(int i = 0; i < s.size(); ++i){    
        cnt += s[i] - '0';
    }   
    return cnt % (s[s.size() - 1] - '0') == 0;
}

int main(){
    string s; cin >> s;

    cout << (lucky_ticket(s) ? "Yes" : "No");
    return 0;
}