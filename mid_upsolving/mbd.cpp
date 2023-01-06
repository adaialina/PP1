#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

void perfectSquares(float n, float m, int d){
    if(d == 1){
    for (int i = n; i <= m; i++) {
        if(sqrt(i) == (int)sqrt(i)){
            cout << i << " ";
        }
    }
    }
    else{
        for (int i = m; i >= n; i--) {
        if(sqrt(i) == (int)sqrt(i)){
            cout << i << " ";
        }
        }
    }
}
 

int main(){
    int n, m, d; cin >> n >> m >> d;
 
    perfectSquares(n, m, d);
 
    return 0;
}
