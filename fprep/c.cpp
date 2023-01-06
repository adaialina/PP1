#include<iostream>
#include<map>

using namespace std;

int main(){
    string s; cin >> s;
    map<char, int> m;

    for(auto ch : s){
        m[ch]++;
    }

    for(auto x : m){
        cout << x.first << " " << x.second << endl;
    }

    /*
    string :: iterator it = s.begin();
    for( ; it < s.end(); it++){
        m[it]++;
    }

    map<char, int> :: iterator it2 = m.begin();
    for( ; it < m.end(); it++){
        cout << it2 -> first << " " << it2 -> second << endl;
    }
    */
}
