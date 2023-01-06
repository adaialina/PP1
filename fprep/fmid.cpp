#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, x; cin >> n >> m >> x;
    vector<vector<int>> v(n, vector<int>(n));
    int cnt = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> v[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j){
            if(v[i][j] == x){
                cnt++;
            }
        }
    }

    cout << cnt << endl;

    /*
    vector<vector<int>> :: iterator it = v.begin();
    for( ; it < v.end(); it++){
        cout << count(v.begin(), v.end(), x);
    }
    */
    
}