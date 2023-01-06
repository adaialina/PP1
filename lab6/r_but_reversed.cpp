#include <iostream>
#include <bits/stdc++.h>
using namespace std;

char lower(char c){
    if(c >= 'A' && c <= 'Z'){
        return c + 32;
    }
    return c;
}

int main(){
    char c; cin >> c;
    cout << lower(c);
    return 0;
}