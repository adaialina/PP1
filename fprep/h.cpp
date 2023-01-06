#include<iostream>
using namespace std;

int main(){
    int a, b, c; cin >> a >> b >> c;
    int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    a += 1;
    if(a > months[b - 1]){
        a = 1;
        b += 1;

        if(b > 12){
            b = 1;
            c += 1;
        } 
    }
    cout << a << ' ' << b << " " << c << endl;
}


