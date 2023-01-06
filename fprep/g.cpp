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

    cout << count(v.begin(), v.end(), maxi) << endl;
}


/*

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

    sort(v.begin(), v.end());
    int ans = 1;

    for(int i = v.size() - 2; i > -1; --i){
        if(v[i] != v[i + 1]){
            break;
        }
        ans++;
    }
    cout << ans << endl;
}

*/