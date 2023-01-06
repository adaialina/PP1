#include<iostream> 
using namespace std; 
 
int main() { 
    string s, t; 
    cin >> s >> t;
    bool copies = true;
    int s_len = s.size(), t_len = t.size();

    if(s_len > t_len || t_len % s_len != 0){
        copies = false;
    }

    if(copies){
        for (int i = 0; i < t.size(); i += s_len){
            for(int j = 0; j < s.size(); ++j){
                if(s[j] != t[i + j]){
                    copies = false;
                    break;
                }            
            }
        }
    }
    cout << (copies ? "YES" : "NO");
    return 0;
}