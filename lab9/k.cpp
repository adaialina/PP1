#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int main(){
    int n; cin >> n;
    int heights[n];

    for(int i = 0; i < n; ++i){
        cin >> heights[i];
    } 

    stack<int> s;
    int maxi = 0;
    int i = 0;

    while(i < n){
        if(s.empty() || heights[s.top()] <= heights[i]){
            s.push(i++);
            continue;
        }

        int last = s.top();
        s.pop();

        int area = heights[last] * (s.empty() ? i : i - s.top() - 1);

        if(area > maxi){
            maxi = area;
        }
    }

    while(!s.empty()){
        int last = s.top();
        s.pop();

        int area = heights[last] * (s.empty() ? n : n - s.top() - 1);

        if(area > maxi){
            maxi = area;
        }
    }

    cout << maxi << endl;
}