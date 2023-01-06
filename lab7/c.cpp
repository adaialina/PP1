#include<iostream>

using namespace std;

bool search(int a[], int x, int l, int r) {
    if (l == r) {
        return a[l] == x;
    }

    int mid = (l + r) / 2;

    return search(a, x, l, mid) || search(a, x, mid + 1, r);
}

int main() {
    int n; cin >> n;
    int a[n];

    for (int i = 0; i < n; ++i) cin >> a[i];

    int x; cin >> x;

    cout << (search(a, x, 0, n - 1) ? "Yes" : "No") << endl;
}