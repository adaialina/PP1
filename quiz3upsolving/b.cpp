#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main(){
    char c; cin >> c;
    string s; cin >> s;
    
    s.erase(remove(s.begin(), s.end(), c), s.end()); 


    for(int i = 0; i < s.size(); i++){
        if(s[i] == c){
            s[i] = 0;
        }
    }

    cout << s << endl;
    
}