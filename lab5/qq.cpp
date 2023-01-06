#include<bits/stdc++.h>

using namespace std;

string s,t;

int main() {
	string s,t;
	cin >> s >> t;
    int s_len = s.size(), t_len = t.size();


	if(s_len > t_len || t_len % s_len != 0) {
		cout << "NO";
		exit(0);
	}

	int cnt = t_len / s_len;
	for(int i = 0; i < cnt; i++) {
		int l = i * s_len;
		if(t.substr(l, s_len) != s) {
			cout << "NO";
			exit(0);
		}
	}
	cout << "YES";
	return 0;
}