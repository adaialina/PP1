#include <iostream>
#include <cstring>
using namespace std;

string remove_vowels(string s) {
    string res = "";

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'u' && s[i] != 'i' && s[i] != 'o' && 
        s[i] != 'A' && s[i] != 'E' && s[i] != 'U' && s[i] != 'I' && s[i] != 'O') {
            res += s[i];
        }
    }

    return res;
}

int main(){
    string s;
    getline(cin, s);
    
    cout << remove_vowels(s);
    return 0;
}

/*

#include <iostream>
using namespace std;

string remove_consonants(string s) {
    string new_string = "";
    for (int i = 0; i < s.size(); i++) {
        if(
            s[i] == 'a' || 
            s[i] == 'e' || 
            s[i] == 'i' || 
            s[i] == 'o' || 
            s[i] == 'u' || 
            s[i] == 'A' || 
            s[i] == 'E' || 
            s[i] == 'I' || 
            s[i] == 'O' || 
            s[i] == 'U') {
                continue;
            }
        new_string += s[i];
    }

    return new_string;
}



int main() {
    string s;
    getline(cin, s);
    cout << remove_consonants(s);

    return 0;
}

*/
