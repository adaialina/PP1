#include <bits/stdc++.h>
using namespace std;

double girls(int n, int m){ //n = total, m = girls
    return m * 100 * 1.0 / n; // *1.0 to convert to double
}

int main(){
    int n, m; cin >> n >> m;
    cout << girls(n, m);
    return 0;
}