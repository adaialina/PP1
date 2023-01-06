#include <iostream>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int a = k%10;
    int b = k/100;
    cout << n+a+b;
    return 0;
}