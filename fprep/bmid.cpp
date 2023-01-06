#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n; 
    int i, j, k, l;

    vector<vector<int>> v(n, vector<int>(n));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> v[i][j];
        }
    }

    for (i = 0; i < n; i++){
        for (j = 0, k = i; j <= i && j < n && k >= 0 && k < n; k--, j++){
            cout << v[k][j] << " ";
        }
        cout << endl;
    }

    for (j = 1; j < n; j++){
        for (i = n - 1, l = j; l >= 0 && l < n && i >= 0 && i < n; i--, l++){
        cout << v[i][l] << " ";
        }
        cout << endl;
    }
    return 0;
}

/*

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n; //>> m;
    vector<vector<int>> v(n, vector<int>(n));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> v[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        int k = i; int j = 0;
        while(k >= 0 && j < n){
            cout << v[k--][j++] << " ";
        }
        cout << endl;
    }

    for(int j = 1; j < n; j++){
        int k = j, i = n - 1;
        while(i >= 0 && k < n){
            cout << v[i--][k++] << " ";
        }
        cout << endl;
    }
    return 0;
}


*/