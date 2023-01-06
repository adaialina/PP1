#include <bits/stdc++.h>
using namespace std;

int main(){
    //int a, b, c; cin >> a >> b >> c;
    int n = 3; int arr[n];

    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }

    sort(arr, arr + n, greater<int>());
    for(int i = 0; i < n; ++i){
        cout << arr[i] << " ";
    }

    return 0;
} 