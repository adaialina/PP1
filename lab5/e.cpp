#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int sumofodds = 0;
    int sumofevens = 0;

    for(int i = 0; i < s.size(); ++i){
        if(i % 2 == 0){
            sumofevens += s[i];
        }
        else{
            sumofodds += s[i];
        }
    }

    if(sumofodds == sumofevens){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
} 