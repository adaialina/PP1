#include<bits/stdc++.h>
using namespace std; 
 
void maxproduct(int arr[], int n){

    sort(arr, arr + n);
    int num1, num2;
     
    int sum1 = arr[0] * arr[1];
   
    int sum2 = arr[n - 1] * arr[n - 2];
   
    if (sum1 > sum2)
    {
        num1 = arr[0];
        num2 = arr[1];
    }
    else
    {
        num1 = arr[n - 2];
        num2 = arr[n - 1];
    }
    cout << num1 * num2;
}
 

int  main()
{
    int n; cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
     
    maxproduct(arr, n);
}
 