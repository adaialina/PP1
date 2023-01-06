#include <iostream>
using namespace std;

int main () {
    int n, a[n];
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        a[i] = a[i] * a[i];
        cout << a[i] << ' ';
    }
    return 0;
}