#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin>>n;
    int arr[n][n];

    for(int i=0; i<n; ++i)
        for(int j=0; j<n; ++j)
        cin>>arr[i][j];

    int maximum=arr[0][0];
    int max2=arr[0][0];
    bool same = true;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(arr[i][j] != arr[0][0]){
                same = false;
            }

            if(arr[i][j] > maximum){
                max2 = maximum;
                maximum = arr[i][j];
                continue;
            }

            if(arr[i][j]>max2 && arr[i][j] != maximum){
                max2 = arr[i][j];
            }
        }
    }
    cout << (same ? 0 : max2);
    return 0;
}