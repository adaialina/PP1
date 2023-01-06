#include <bits/stdc++.h>
using namespace std;

int main (){
    int n; cin >> n;
    int arr[n];
    int max=0; 
    for(int i=0; i<n; ++i){
        cin>>arr[i]; 
        if(arr[max]<arr[i]){
            max = i;
        }
    }
       
    cout<<max+1;
    return 0;
} 
