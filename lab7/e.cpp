#include <bits/stdc++.h>
using namespace std;

bool powerof2(long long n){
    if(n % 2 != 0){
        return n == 1;
    }

    return powerof2(n / 2); 
}

int main(){
    long long n; cin >> n;

    cout << (powerof2(n) ? "Yes" : "No") <<  endl; 
}