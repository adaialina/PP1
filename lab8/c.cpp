#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];
    int a, b;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cin >> a >> b;

    reverse(arr + a, arr + b + 1);

    for(int i = 0; i < n; i++)
    cout << arr[i] << ' ';

    return 0;
}