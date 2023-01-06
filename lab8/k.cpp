#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    int n, a, k; cin >> n;
    vector<int> v;

    for(int i = 0; i < n; i++){
        cin >> a;
        v.push_back(a);
    }

    cin >> k;
    int sum = 0;
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    for(int i = 0; i < k; i++){
        sum += v[i];
    }

    cout << sum;
    return 0;
}