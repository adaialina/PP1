#include <iostream>
#include <bits/stdc++.h>
using namespace std;

char upper(char c){
    if(c >= 'a' && c <= 'z'){
        return c - 32;
    }
    return c;
}

int main(){
    char c; cin >> c;
    cout << upper(c);
    return 0;
}