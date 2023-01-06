#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n, a, k; cin >> n;
    vector<int> v;

    for(int i = 0; i < n; i++){
        cin >> a;
        v.push_back(a);
    }

    int max = *max_element(v.begin(), v.end());
    int min = *min_element(v.begin(), v.end());

    cout << max - min;
    return 0;
}