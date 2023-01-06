#include <bits/stdc++.h>
using namespace std;

void removeSpecialCharacter(string s){
    for (int i = 0; i < s.size(); i++) {
        if (s[i] < 'A' || s[i] > 'Z' && s[i] < 'a' || s[i] > 'z'){  
            s.erase(i, 1);
            i--;
        }
    }
    cout << s;
}
 
int main()
{
    string s; cin >> s;
    removeSpecialCharacter(s);
    return 0;
}