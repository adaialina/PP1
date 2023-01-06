#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool evenodd(int a, int b) {
	if(a % 2 == 0 && b % 2 == 1) return true;
	if(b % 2 == 0 && a % 2 == 1) return false;
	if(a % 2 == 0 && b % 2 == 0) return b < a;
	if(a % 2 == 1 && b % 2 == 1) return a < b;
}

int main(){
    int n; cin >> n;
    vector<int> v;

    for(int i = 0; i < n; ++i){
        int x; cin >> x;
        v.push_back(x);
    } 

    sort(v.begin(), v.end(), evenodd);

    for(auto x: v){
        cout << x << " ";
    }
    cout << endl;
}