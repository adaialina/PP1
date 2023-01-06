#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int sum = 0;

    if(n % 2 == 0){
        sum = n-1;
        cout << sum;
    }
    else(){
        cout << '0' << endl;
    }
    
    return 0;
} 