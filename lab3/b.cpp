#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int positives=0;
    for(int i=0; i<n; ++i){
        int a;
        cin>>a;
        if(a > 0){
            positives++;
        }
    }
    cout<<positives;
    return 0;
} 