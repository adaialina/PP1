#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n; cin>>n;
    for(int i=0; pow(3, i)<=n; ++i){
        cout << pow(3, i) << " ";
    }
} 