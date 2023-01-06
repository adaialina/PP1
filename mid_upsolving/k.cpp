#include <iostream>
#include <cmath>
using namespace std;

int diff(int n, int a[], int b[], int t) {
    int cnt = 0;
    for (int i = 1; i <= n; ++ i) {
        if (a[i] <= t && t <= b[i]){
            cnt++;
        }
    }
    cout << cnt;
}

int main (){
    int n; cin >> n;
    int a[n + 1], b[n + 1];

    for (int i = 1; i <= n; ++ i) {
        cin >> a[i];
    }

    for (int i = 1; i <= n; ++ i) {
        cin >> b[i];
    }

    int t; cin >> t;

    diff(n, a, b, t);
 //   cout << cnt;
}