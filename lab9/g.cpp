#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int main(){
    string s; cin >> s;
    stack<char> br;

    for(int i = 0; i < s.size(); ++i){
        if(s[i] == '1' && !br.empty() && br.top() == '1'){
            br.pop();
            continue;
        }
        br.push(s[i]);
    }

    string res;

    while(!br.empty()){
        res = br.top() + res;
        br.pop();
    }   

    cout << res << endl; 
}

