#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

double PriceQualityRatio(int price, int quality) {
    return (quality * 1.) / price;
}

int main() {
    int n;
    cin >> n;
    string s;
    int p, q;

    string bestphone;
    double bestratio;

    for (int i = 0; i < n; ++i) {
        cin >> s >> p >> q;
        double ratio = PriceQualityRatio(p, q);
        if (i == 0 || ratio > bestratio) {
            bestratio = ratio;
            bestphone = s;
        }
    }

    cout << bestphone << endl;

    return 0;
}