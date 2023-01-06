#include <bits/stdc++.h>
using namespace std;

bool exists(int a[], int n, int x){
    bool exists = false;

    for(int i = 0; i < n; ++i){
        if(a[i] == x){
            exists = true; 
            break;
        }
    }
    return exists;
}

int main(){
    int n; cin >> n;
    int a[n];

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    int x; cin >> x;

    cout << (exists(a, n, x) ? "Yes" : "No");
    return 0;
}