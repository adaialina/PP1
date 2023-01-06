#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, order; cin >> a >> b >> order;
    int cnt = 0;

    for(int i = min(a, b); i >= 1; i--){
        if((a % i == 0) && (b % i == 0)) 
            cnt++;
        
        if(cnt == order){
            cout << i << endl;
            return 0;
        }
    }
}