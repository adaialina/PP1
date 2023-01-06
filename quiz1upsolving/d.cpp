#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n; cin>>n;
    int minimum = 0;

    if(n % 2 == 0){
        cout << 2;
    }
    else{
                for(int i=2; i<=n/2; i++){
            if(n%i==0){
                if(i < minimum){
                    minimum = i;
                }
                cout << minimum;
                if else(i == n){
                    
                }
                }
            }
        } 
    }
/* else if(n % 2 != 0){
        for(int i=2; i<=n/2; i++){
            if(n%i==0){
                if(i < minimum){
                    minimum = i;
                }
                cout << minimum;
            }
        } 
    }    
    else{
        cout << n; 
    }*/
    return 0;
} 