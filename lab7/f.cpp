#include <bits/stdc++.h>
using namespace std;

int evens(string s, int i){
    if(i == s.size()){
        return 0;
    }

    return ((s[i] - '0') % 2 == 0 ? 1 : 0) + evens(s, i + 1); 
}

int main(){
    string s; cin >> s;

    cout << evens(s, 0) <<  endl; 
}