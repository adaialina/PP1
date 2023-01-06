#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a = 0;
    int b = 1;
    for(int i=3; i>=0; i--){
        if((n & (1 << i)) > 0){
            a = a + b;
        }
        b *= 2;
    }
    cout << a;
    return 0;

}