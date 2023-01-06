#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n; cin >> n;
    vector<pair<int, int>> points;

    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;

        //pair<int, int> coords = make_pair(x, y);
        points.push_back(make_pair(x, y));
    }

    sort(points.begin(), points.end());
     
    vector<pair<int, int>> :: iterator it = points.begin();
    for( ; it != points.end(); it++){
        cout << it->first << ' ' << it->second << endl;
    }

    /*
    for(auto c: points){
        cout << c.first << ' ' << c.second << endl;
    }
    */
}

