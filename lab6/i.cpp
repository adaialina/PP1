#include <iostream>
#include <cstring>
using namespace std;

string capital_evens(string s){
    string new_string = "";

    for(int i = 0; i < s.size(); ++i){
        if(i % 2 == 0 && s[i] >= 'a' && s[i] <= 'z'){
            new_string += s[i] - ' ';
            continue;
        }
        new_string += s[i];
    }
    return new_string;
}

int main(){
    string s;
    cin >> s;
    
    cout << capital_evens(s);
    return 0;
}