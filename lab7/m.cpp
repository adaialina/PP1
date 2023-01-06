#include<iostream>

using namespace std;

void print_till(int n, int i){
    if(i > n){
        return;
    }
    cout << i << ' ';
    print_till(n, i + 1);
}

int main() {
    int n; cin >> n;
    print_till(n, 1);
}