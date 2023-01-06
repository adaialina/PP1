#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int n;
    cin >> n;
    int x = sqrt (n);
    if (x*x == n) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}