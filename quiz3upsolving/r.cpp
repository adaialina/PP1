#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
 
    char c; 
    cin >> c;
 
    int i;
    for (i = 0; i<s.length(); i++)
    {
        if (s[i] == c)
        {
            cout << i << " ";
            break;
        }
    }
        
    for (int j=s.length()-1; j>i; j--)
        if (s[j] == c)
        {
            cout << j;
            break;
        }
 
        return 0;
}