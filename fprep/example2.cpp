#include <iostream>
#include <cmath>
using namespace std;

int d[101010];
void diff(int n, int a[], int b[]) {
    for (int i = 1; i <= n; ++ i) {
        d[i] = abs(a[i] - b[i]);
    }
}

int main () {
    int n;
    cin >> n;
    int a[n + 1], b[n + 1];
    for (int i = 1; i <= n; ++ i) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; ++ i) {
        cin >> b[i];
    }
    diff(n, a, b);
    for (int i = 1; i <= n; ++ i) {
        cout << d[i] << ' ';
    }
    return 0;
}

/* #include <iostream>

using namespace std;

int main(){
    int n, m; cin>>n>>m;
    int arr[n][m];
    for(int i=0; i<n; ++i){
       for(int j=0; j<n; ++j){
        cin>>arr[i][j];
        int maximum=arr[0][0];
        maximum= max(maximum, arr[i][j]);
        cout << maximum; 
       }
    }
    return 0;
}  */

