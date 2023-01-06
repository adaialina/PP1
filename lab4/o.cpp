#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int arr[n][n];

    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j)
            cin >> arr[i][j];
    
    int max = arr[0][0];
    int x = 0, y = 0;
    
    for(int i = 0; i < n; ++i){
        if(max < arr[i][i]){
            max = arr[i][i];
            x = i;
            y = i;
        }
    } 
    cout << "Maximum element is: " << max << " with coordinates: " << x + 1 << ';' << y + 1 << endl;  
}  