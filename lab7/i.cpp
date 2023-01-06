#include<iostream>
using namespace std;

int sum() {
    int n;

    if (cin >> n && n != 0) {
        return n + sum();
    }
    return 0;
}

int main() {
    cout << sum() << endl;
}
