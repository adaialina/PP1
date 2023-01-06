#include <iostream>

using namespace std;

int main(){
    int n; cin>>n;
    int maxn=0;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        maxn = max(maxn, x);
    }
    cout<<maxn;
    
    return 0;
} 