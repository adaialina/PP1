#include <iostream>
#include <cmath>

using namespace std;
int main (){
     int a,z,b,c,d;
     cin >> a;
     z = a % 2;
     a = a / 2;
     b = a % 2;
     a = a / 2;
     c = a % 2;
     a = a / 2;
     d = a % 2;
     cout << z * 8 + b * 4 + c * 2 + d * 1;
    return 0;
}
