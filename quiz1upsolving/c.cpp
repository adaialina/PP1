#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y, a, b; cin >> x >> y >> a >> b;
    int test = 0; 
    //x = medium, y = small, a = need m, b = need s; 
    if(x >= a && y >= b){
        cout << "Yes";
    } 

    if(y < b && (x+y)==(a+b)){
        cout << "Yes";
    }

    else if(x >= a && y<b){
        if((x-a) > 0 && (x-a)>=(b-y)){
            cout << "Yes";
        }
        else{
            cout << "No";
        }
    }

    else{
        cout << "No";
    }
    
    return 0;
} 