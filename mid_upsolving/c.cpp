/*
#include <bits/stdc++.h>
using namespace std;

void evenodd(int n, int arr[]){
  int l = 0;
  int r = n - 1;
  while(l < r){
    while(arr[l] % 2 == 0 && l < r){
      l++;    
    }

    while(arr[r] % 2 != 0 && l < r){
      r--;
    }

    if(l < r){
      int temp = arr[l];
      arr[l] = arr[r];
      arr[r] = temp;
      l++;
      r--;

    }

  }

  for(int i = 0; i < n; ++i){
      cout << arr[i] << ' ';
  }


}


int main(){
  int n; cin>>n;
  int arr[n];
  
  for(int i = 0; i < n; ++i){
      cin >> arr[i];
  }


evenodd(n, arr);

 
}
*/

#include <iostream>
using namespace std;

int main (){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    } 
    for (int i = 0; i < n; i++){
        if (a[i] % 2 == 0){
        cout << a[i] << " ";
        }
    }
    for (int i = 0; i < n; i++){
        if (a[i] % 2 != 0){
           cout << a[i] << " ";
        }
    }
    return 0;
}