#include <iostream>
using namespace std;

int main (){
    int n; cin >> n;
    int arr[n];
    
    for(int i=0; i<n; ++i) cin>>arr[i];
    int max=arr[0], min=arr[0]; 

    for(int i = 0; i<n; ++i){
        if(max<arr[i]){
            max = arr[i];
        }
        if(min>arr[i]){
            min = arr[i]; 
        }
    }
    
    for (int i = 0; i < n; ++i) {
        if (arr[i] == max) {
            arr[i] = min;
        }
    }

    for(int i=0; i < n; ++i){
        cout << arr[i] << ' ';
    }
    return 0;
} 
