#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int findsum(string s){
    int sum = 0;

    for(char c : s){
        if(isdigit(c)){
            sum += c - '0';
        }
    }
    return sum;
}

int main(){
    string s; cin >> s;

    cout << findsum(s) << endl;
}