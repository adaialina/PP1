#include <bits/stdc++.h>
using namespace std;

void toASCII(string s){
    int cnt = 0;
    char c;
    for(int i = 0; i < s.size(); i++){
        c = s.at(i);
        cnt += int(c);
    }
    if(cnt > 300){
        cout << "It is tasty!";
    }
    else{
        cout << "Oh, no!";
    }
}

int main(){
    string s; cin >> s;

    toASCII(s);
    return 0;
}
