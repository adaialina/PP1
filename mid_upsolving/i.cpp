#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    cout << endl;

    for (int i = 0; i < n; i++){ 
        int max = 0;
        for (int j = 0; j < n; j++){ 
            if(arr[i][j] > max)
            max = arr[i][j];
        }
        for(int j = 0; j<n; j++){
                arr[i][j]=max;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<' ';
        }
        cout<<'\n';
    }
    return 0;

}