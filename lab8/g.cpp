#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool isPrime(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n, x; cin >> n;
    vector<int> v;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }

    cin >> x;
    int cnt = 0;

    for(int i = 0; i < v.size(); i++){
        if(v[i] >= x && isPrime(v[i])){
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}