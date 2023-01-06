#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, k, m, x1, y1, x2, y2, ful = 0;
    cin >> n >> k;
    int a[n][k]; 

    for(int i = 0; i < n; i++){
        for(int j = 0; j < k; j++){
            a[i][j] = 0;
        }
    }

    cin >> m;

    for(int i = 0; i < m; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        for(int j = x1; j < x2; j++){
            for(int l = y1; l < y2; l++){
            a[j][l] = 1;
            }
        }
    }

    for(int i = 0; i < n; i++){
        ful += count(a[i], a[i]+k, 0);
    }
    
    cout << ful;
    return 0;
}
