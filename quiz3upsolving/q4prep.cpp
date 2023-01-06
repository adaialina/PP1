/*
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n; cin >> n;
    vector<pair<string, string>> students;
    string name, surname;

    for(int i = 0; i < n; i++){
        cin>> name >> surname;
        students.push_back(make_pair(name, surname)); 
    }

    sort(students.begin(), students.end());
    
    vector<pair<string, string>> :: iterator it = students.begin();

    for( ; it != students.end();it++){
        cout << it->first << ' ' << it->second << endl;
    } 
    return 0;
}
*/


#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n; cin >> n;
    vector<pair<string, string>> students;
    for(int i = 0; i < n; i++){
        string name, surname;
        cin >> name >> surname;
        students.push_back(make_pair(name,surname));
    }

    sort(students.begin(), students.end());

    for(auto a : students){
        cout << a.first << ' ' << a.second << endl;
    }
    return 0;
}



/*
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n; cin >> n;
    double d; 
    d = sqrt(n);
    printf("Hi, it is: %.2f\n", d);
    //cout << d;
    return 0;
}
*/






/*
smth like this:
int n = 5
1 1 4 27 256 3125 
 */


/*
//lab10 B
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long power(){
    static long long n;
    long long result = 1;
    for(int i = 0; i < n; i++){
        result *= n;
    }
    n++;
    return result;
}

int main(){
    int n; cin >> n;
    vector<long long> v(n+1);

    generate(v.begin(), v.end(), power);

    vector<long long> :: iterator it = v.begin();
    for( ; it != v.end(); it++){
        cout << *it << ' ';
    }
    /*
    for(auto a : v){
        cout << a << ' ';
    }
    return 0;
}

*/







