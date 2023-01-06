#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    string s; cin >> s;
    string temp = "";
    for (int i = 0; i < s.size(); ++i) {
        if ((s[i] >= 'a' && s[i] <= 'z')) {
            temp = temp + s[i];
        }
    }

    cout << temp << endl;

}