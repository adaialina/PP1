#include <bits/stdc++.h>
using namespace std;

struct point{
    int x, y;
    point() {};
    point(int x, int y){
        this -> x = x;
        this -> y = y;
    }
};

point p;

bool cmp(point a, point b){
    double disa = sqrt(pow(a.x - p.x, 2) + pow(a.y - p.y, 2));
    double disb = sqrt(pow(b.x - p.x, 2) + pow(b.y - p.y, 2));
    return disa < disb;
}

int main(){
    int x, y; cin >> x >> y;
    p.x = x;
    p.y = y;
    int n; cin >> n;

    vector<point> v;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        v.push_back(point(x, y));
    }

    sort(v.begin(), v.end(), cmp);
    for(int i = 0; i < v.size(); i++){
        cout << v[i].x << " " << v[i].y << endl;
    }
}