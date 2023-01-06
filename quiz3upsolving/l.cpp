#include<bits/stdc++.h> 
  
using namespace std; 
 
int main() { 
    string a; getline(cin, a); 

    for (int i = 0; i < a.size(); ++i) {
        if(a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z'){
            if(a[i] == 'z'){
                a[i] = 'a';
            }
            
            else if(a[i] == 'Z'){
                a[i] = 'A';
            }

            else{
                a[i] += 1;
            }

            
        }   
    }

    cout << a << endl;
}