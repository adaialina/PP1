#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n, a, b; cin >> n;
    vector<int> v;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }

    cin >> a >> b;

    v.insert(v.begin() + a, b);

    for(int i = 0; i < v.size(); i++)
    cout << v[i] << " ";

    return 0;
}
