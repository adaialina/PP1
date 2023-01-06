#include <iostream>
#include <cstring>
using namespace std;

int sumofdigits(int n){
    int sum = 0;

    while(n != 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(){
    int n;
    cin >> n;
    
    cout << sumofdigits(n);
    return 0;
}