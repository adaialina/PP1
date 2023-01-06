











/*

//HHH
#include<iostream>
using namespace std;

int main(){
    int a, b, c; cin >> a >> b >> c;
    int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    a += 1;
    if(a > months[b - 1]){
        a = 1;
        b += 1;

        if(b > 12){
            b = 1;
            c += 1;
        }
    }
    cout << a << " " << b << " " << c << endl;  
}
*/


/*

//GGG
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



/*

//FFF
#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;

int main(){
    int n; cin >> n;
    vector<vector<int>> v(n, vector<int>(n));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> v[i][j];
        }
    }

    bool ok = true;

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(v[i][j] != v[j][i]){
                ok = false;
                break;
            }
        }
    }

    cout << (ok ? "YES" : "NO") << endl;
}
*/    
    


/*

//EEE
#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    vector<int> v(n);

    for(int i = 0; i < n; i++){
        int sum = 0; 
        for(int j = 0; j < m; j++){
            int x; cin >> x;
            if(x > 0){
                sum++;
            }
        }
        v[i] = sum;
    }

    int maxi = INT_MIN;
    for(auto x : v){
        maxi = max(maxi, x);
    }

    int ind = -1;
    bool eq = false;

    for(int i = 0; i < v.size(); i++){
        if(v[i] == maxi){
            if(ind != -1){
                eq = true;
                break;
            }
            ind = i;
        }
    }

    if(eq){
        cout << "Smth" << endl;
    }
    else{
        cout << ind + 1 << endl;
    }
}
*/




/*

//BBB
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    char arr[n][m];
    vector<vector<bool>> used(n, vector<bool>(m, false));

    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            cin >> arr[i][j];

    stack<pair<int, int>> s;
    s.push(make_pair(0, 0));

    while(!s.empty()){
        int i = s.top().first, j = s.top().second;
        s.pop();

        if(i < 0 || i >= n || j < 0 || j >= m){
            continue;  
        }

        if(arr[i][j] == '#' || used[i][j]){
            continue;
        }

        used[i][j] = true;

        s.push(make_pair(i + 1, j));
        s.push(make_pair(i - 1, j));
        s.push(make_pair(i, j + 1));
        s.push(make_pair(i, j - 1));
    }
    cout << (used[n - 1][m - 1] ? "YES" : "NO");
}
*/