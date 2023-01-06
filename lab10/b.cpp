#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

long long npower(){
    static long long n;
    long long res = 1;
    for(int i = 0; i < n; i++){
        res *= n;
    }
    n++;
    return res;
} 

int main(){
    int n; cin >> n;
    vector<long long> v(n+1);

    generate(v.begin(), v.end(), npower);

    for(auto a : v){
        cout << a << " ";
    }
    cout << endl;
    return 0;
}