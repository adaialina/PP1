#include <bits/stdc++.h>
using namespace std;
 
void digits(int n)
{
    int largest = 0;
    int smallest = 9;
 
    while (n) {
        int r = n % 10;
        largest = max(r, largest);
        smallest = min(r, smallest);
        n = n / 10;
    }
    cout << largest << " " << smallest;
}
 
int main(){
    int n; cin >> n;
 
    digits(n);
    return 0;
}