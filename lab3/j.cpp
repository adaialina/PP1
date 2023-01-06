#include<iostream>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }

    bool found = false;
    int index = 0;

    for (int i = 0; i < n; ++i) {
        if (m == a[i]) {
            found = true;
            index = i;
            break;
        }

        if (m < a[i]) {
            found = true;
            index = i;
            break;
        }
    }

    if (found) {
        cout << index << endl;
    } 
    else {
        cout << n << endl;
    }
}
