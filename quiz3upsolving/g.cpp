#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int main(){
    int fir;
    string s, l;
    getline(cin, s);
    int k; cin >> k;
    char n[k];

    for (int i = 0; i < k; i++){
        cin >> n[i];
    } 
    sort(n, n + k);
    for(int i = 0; i < k; i++){
        cout << n[i] << " - " << count(s.begin(), s.end(), n[i]) << endl;
    }
}
