#include <iostream>
#include <string>
#include <algorithm> 
#include <cmath> 
using namespace std;

int main(){
    int fir = 0;
    string s, k = ""; 
    getline(cin, s);
    s+= ' ';
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' '){
            if(fir == 0){
                cout << k << endl;
            }
            k = "";
            fir = 0;
        }
        else{
            if(s[i] - '0' >= 0 && s[i] - '0' < 10){
                fir = 1;
            }
            k += s[i];
        }
    }
    return 0;
}
