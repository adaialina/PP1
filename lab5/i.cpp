#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    string s, t; cin >> s >> t;
    const int n = 100100;
    int cnt1[n],cnt2[n];    

	for(int i = 0; i < s.size(); i++) {
		cnt1[s[i]] ++; 
	}

	for(int i = 0; i < t.size(); i++) {
		cnt2[t[i]] ++;
    }

    for(char i = 'a'; i <= 'z'; i++){
        if(cnt1[i] != cnt2[i]){
            cout << "NO";
            exit(0);
        }

        else{
            cout << "YES";
            exit(0);
        }
    }
    
    return 0;
}