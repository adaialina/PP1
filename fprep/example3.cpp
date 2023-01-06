#include <bits/stdc++.h>
using namespace std;

bool even_str(string s){
    bool even = true;
    if(s[i] != '0' && s[i] != '2' && s[i] != '4' && s[i] != '6' && s[i] != '8'){
        even = false;
        break;
    }
    return even;
}

int main(){
    string s; cin >> s;
    cout << (even_str(s) ? 'Valid' : 'Not valid');
    return 0;
}
/*

#include <bits/stdc++.h>
using namespace std;

int d[100100];
void diff(int n, int a[], int b[]){
    for(int i = 1; i <= n; ++i){
        d[i] = abs(a[i] - b[i]);
    }
}

int main(){
    int n; cin >> n;
    int a[n + 1], b[n + 1];

    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }

    for(int i = 1; i <= n; ++i){
        cin >> b[i];
    }

    diff(n, a, b);

    for(int i = 1; i <= n; ++i){
        cout << d[i] << ' ';
    }
    return 0;
}


/*

#include <bits/stdc++.h>
using namespace std;

int sames(int n, int a[], int b[]){
    int x[100], y[100];
    int sum = 0;

    for(int i = 1; i <= 100; ++i){
        x[i] = 0;
        y[i] = 0;
    }

    for(int i = 1; i <= n; ++i) x[a[i]]++;
    for(int i = 1; i <= n; ++i) y[b[i]]++;

    for(int i = 1; i <= 100; ++i){
        sum += min(x[i], y[i])
    }
    return sum; 
}

int main(){
    int n; cin >> n;
    int a[n + 1], b[n + 1];

    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }

    for(int i = 1; i <= n; ++i){
        cin >> b[i];
    }

    cout << sames(n, a, b);
    return 0;
}

/*

#include<bits/stdc++.h>
using namespace std;

bool is_prime(int n) {
	for (int i = 2; i < n; i++) {	
		if (n % i == 0) {
            return false;
        }
	}
	return true;
}

int main() {
	int n, f; cin >> n >> f;

	cout << (n < 500 && is_prime(n) && f % 2 == 0 ? "Good job!" : "Try next time!") << endl;
}

/* 

#include<iostream>   
using namespace std; 
 
int main() { 
    string s; cin >> s;
    int cnt[10];

    for(int i = 0; i < 10; ++i){
        cnt[i] = 0;
    }

    for(int i = 0; i < s.size(); ++i){
        cnt[s[i] - '0'] ++;
    }

    bool equal = true;
    int cnt_eq = -1;

    for(int i = 0; i < 10; ++i){
        if(cnt[i] != 0){
            if(cnt_eq == -1){
                cnt_eq = cnt[i];
            }
            else if(cnt_eq != cnt[i]){
                equal = false;
                break;
                //}
            }
        }
    }

    cout << (equal ? "YES" : "NO") << endl;
}

*/