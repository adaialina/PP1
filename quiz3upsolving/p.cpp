#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

string strToBool(string str){
    for(int i = 0; i < str.size(); i++){
        if(str[i] == '1' && str.size() == 1){
            cout << "true";
            exit(0);
        }

        else if(str[i] == '0' && str.size() == 1){
            cout << "false";
            exit(0);
        }

        else{
            return str;
        }

    }
}

int main() {
    string str;
    cin >> str;

    cout << strToBool(str);

    return 0;
}