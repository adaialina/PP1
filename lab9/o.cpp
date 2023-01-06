#include <iostream>
#include <map>

using namespace std;

//void sort()

int main(){
    int n; cin >> n;
    map<string, string> regist;

    for(int i = 0; i < n; ++i){
        string l, p; cin >> l >> p;

        regist[l] = p;
    } 

    int m; cin >> m;

    for(int i = 0; i < m; ++i){
        string l, p; cin >> l >> p;

        if(regist.find(l) == regist.end()){
            cout << "login error" << endl;
        }
        else if(regist[l] != p){
            cout << "password error" << endl;
        }
        else{
            cout << "correct password" << endl;
        }
    } 
}