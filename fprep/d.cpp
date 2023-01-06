#include<iostream>

using namespace std;

int main(){
    string s; cin >> s;

    int num = 0;
    string tkns[4];
    string tmp = "";

    for(int i = 0; i < s.size(); ++i){
        if(s[i] != '.'){
            tmp += s[i];
            continue;
        }
        tkns[num++] = tmp;
        tmp = "";
    }
    tkns[num++] = tmp;

    bool valid = true;

    for(int i = 0; i < 4; ++i){
        if(tkns[i].size() == 0){
            valid = false;
            break;
        }
    }
    
    cout << (valid ? 1 : 0);
}
