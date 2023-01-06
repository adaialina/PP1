#include <bits/stdc++.h>
using namespace std;

int minustoplus(int x){
    if(x < 0){
        return x * -1;
    }
    return x;
}

int main(){
    int x; cin >> x;
    cout << minustoplus(x);
    return 0;
}