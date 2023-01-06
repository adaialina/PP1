#include<iostream>
#include<algorithm>
#include<stack>

using namespace std;

int main(){
    string s; cin >> s;
    stack<char> brack;

    bool good = true;

    for(int i = 0; i < s.size(); ++i){
        if(s[i] == '('){
            brack.push(s[i]);
            continue;
        }

        if(brack.empty()){
            good = false;
            break;
        }

        if(brack.top() != '('){
            good = false;
            break; 
        }
        brack.pop();
    } 

    cout << (good && brack.size() == 0 ? "YES" : "NO") << endl;
}

