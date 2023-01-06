#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> s;
        int t = s.find("@gmail.com");
        if (t != string::npos)
            cout << s.substr(0, t) << endl;
    }

    return 0;
}