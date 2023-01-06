#include <bits/stdc++.h>
using namespace std;
 
int squaresbtwn(int n, int m, int d){
    if(d == 1){
        for (int i = n; i <= m; ++i){
            for (int j = 1; j * j <= i; ++j)
            if (j * j == i){
                cout << i << ' ';
            }
        }
    }
}
 /*   else if(d == -1){
        for(int i = m; i <= n; --i){
            for(int j = 0; j * j >= i; --j){
                cout << i << " ";
            }
        }
    } 
}*/

int main(){
    int n, m, d; cin >> n >> m >> d; // n = start, m = end, d = direction
    
    cout << squaresbtwn(n, m, d);
    return 0;
}
