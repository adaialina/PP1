#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
    int n; cin >> n;
    int size = (n * (n + 1)) / 2;

    vector<int> v(size);

    int delta = 0;

    for (int i = 1; i <= n; ++i) {
        fill(v.begin() + delta, v.begin() + delta + i, i);
        delta += i;
    }

    for (auto x: v) {
        cout << x << ' ';
    }

    cout << endl;
}