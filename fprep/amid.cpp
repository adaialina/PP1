#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v;
    
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    } 

    int maxi = *max_element(v.begin(), v.end());
    int mini = *min_element(v.begin(), v.end());
    
    for(vector<int> :: iterator it = v.begin(); it < v.end(); it++){
        cout << maxi - mini + 1 - v.size();
        exit(0); 
    }
    
    return 0;
}