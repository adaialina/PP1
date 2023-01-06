#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int arr[n];
    int cntodd = 0, sumodd = 0;
    int cntevn = 0, sumevn = 0;

    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }

    for(int i = 0; i < n; ++i){
        if(arr[i] % 2 == 0){
            cntevn++;
            sumevn += arr[i]; 
        }
        else{
            cntodd++;
            sumodd += arr[i];
        }
    }

    cout << "Left hand magic power: " << cntevn * sumevn << endl;
    cout << "Right hand magic power: " << cntodd * sumodd;

    return 0;
}