#include <bits/stdc++.h>
using namespace std;

int maxdigit(string s, int i){
    if(i == s.size()){
        return 0;
    }

    return max((s[i] - '0'), maxdigit(s, i + 1));
}

int main(){
    string s; 
    cin >> s;

    cout << maxdigit(s, 0) <<  endl; 
}