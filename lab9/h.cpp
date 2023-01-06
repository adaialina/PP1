#include<iostream>
#include<map>

using namespace std;

int main(){
    int n; cin >> n;
    map<string, int> occs;

    for(int i = 1; i <= n; ++i){
        string s; cin >> s;

        if(occs[s] == 0){
            occs[s] = i;
        }
    }

    for(map<string, int> :: iterator it = occs.begin(); it != occs.end(); ++it){
        cout << it -> first << " " << it -> second << endl; 
    }

    return 0;
}