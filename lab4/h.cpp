#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int arr[n][m];

    for(int i=0; i<n; ++i)
        for(int j=0; j<m; ++j)
            cin >> arr[i][j];
    
    int minimum = 0;
    int row = 0;

    for(int j = 0; j < m; ++j){
        minimum += arr[0][j];
    }

    for(int i = 1; i < n; ++i){
        int sum = 0;
        for(int j = 0; j < m; ++j){
            sum += arr[i][j];    
        }
        if(sum < minimum){
            minimum = sum;
            row = i;
        }
    }
    cout << row + 1 << endl;
}