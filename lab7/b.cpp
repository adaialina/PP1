#include <bits/stdc++.h>
using namespace std;

void tobinary(int n){
    if(n == 0) return;
    tobinary(n/2);
    cout << n % 2;
}

int main(){
    int n; 
    cin >> n;

    tobinary(n);
}
