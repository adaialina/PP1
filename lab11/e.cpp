#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
    vector<map<char, int>> v;
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        map<char, int> m;
        for(int j = 0; j < s.size(); j++){
            m[s[j]]++;
        }
        v.push_back(m);
    }

    bool pr = false; 
    for(char c = 'a'; c <= 'z'; c++){
        bool ok = true;
        for(auto h : v){
            if(h[c] == 0){
                ok = false;
            }
        }
        if(ok){
            cout << c << " ";
            pr = true;
        }
    }
    if(!pr){
        cout << "NO COMMON CHARACTERS";
    }
    return 0;
}