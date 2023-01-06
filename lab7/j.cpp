#include <bits/stdc++.h>
using namespace std;

int sum_of_half_digits(int n){
    if(n == 0){
        return 0;
    }

    return (n % 10) / 2 + sum_of_half_digits(n / 10);
}

int main(){
    int n; 
    cin >> n;

    cout << sum_of_half_digits(n) <<  endl; 
}