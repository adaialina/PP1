#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    map<string, set<int>> m;
    int total = 0;

    for(int i = 0; i < n; i++){
        string name;
        int att;
        cin >> name >> att;
        m[name].insert(att);
    }
    for(auto s : m){
        cout << s.first << " ";
        if(s.second.size() < 3){
            cout << "NO BONUS" << endl;
        }
        else{
            cout << "+1" << endl;
        }
    }
    return 0;
}