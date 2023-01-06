#include <iostream>
#include <cstring>
using namespace std;

int count(string s){
    int cnt = 0;

    for(int i = 0; i < s.size(); ++i){
        if('0' <= s[i] && s[i] <= '9'){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    string s; cin >> s;
    int n; cin >> n;
    
    cout << (count(s) >= n ? "YES" : "NO");
    return 0;
}