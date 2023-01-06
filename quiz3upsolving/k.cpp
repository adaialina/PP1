#include<bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    int decimal_number = 0, p = 0;

    for(int i = s.size() - 1; i >= 0; i--){
        if(s[i] == '1'){
            decimal_number+=pow(2,p); 
        }
        p++; 
    }
    
    cout << decimal_number << endl;
}