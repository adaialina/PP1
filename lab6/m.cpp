#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverse(int a[], int n){
    for(int i = n-1; i > -1; --i){
        cout << a[i] << ' ';
    }
    cout << endl;
}

int main(){
    int n; cin >> n;
    int a[n];

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    reverse(a, n);
}