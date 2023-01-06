#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//void sort()

int main(){
    int n; cin >> n;
    vector<pair<int, int>> prs;

    for(int i = 0; i < n; ++i){
        int x, y; cin >> x >> y;
        
        prs.push_back(make_pair(x + y, i + 1));
    } 

    sort(prs.begin(), prs.end());

    for(auto p: prs){
        cout << p.second << ' ';
    }
    cout << endl;
}