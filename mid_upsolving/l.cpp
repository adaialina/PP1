#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int lmt=0;
    int n, m; cin>> n >> m;
    int arr[n][m]; 
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> arr[i][j];
        }
    }

    int limit; cin >> limit;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(arr[i][j] > limit){
                lmt++;
            }
        }
    }

    if(lmt == 0){
        cout << "No penalty for today." << endl;
    }
    else{
        cout << "Penalty!" << endl;
    }
}