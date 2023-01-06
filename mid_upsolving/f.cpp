#include <iostream>

using namespace std;
int main(){
    int n,i,j,flag=0;
    cin>>n;
    int arr[n][n];
    

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            cin>>arr[i][j];
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(arr[i][j] != arr[j][i]){
                    flag=1;
                    break;
            }
        }
    }
    
    if(flag == 0){
        cout<<"Perfect.";
    }
    else{
        cout<<"Not perfect.";
    }
    return 0;
}