/*
#include <iostream> 
#include <algorithm>
#include <vector>
using namespace std;
int main () {
  
  int n;
  cin >> n;
  vector<pair<string, string>> students;
  string name, surname;
  for(int i=0; i<n; i++){
      cin >> name >> surname;
      students.push_back(make_pair(name, surname));
  }
  sort(students.begin(), students.end());
  vector<pair<string, string>>::iterator it = 
    students.begin();

  for( ; it != students.end(); it++)
    cout << it->first << ' ' << it->second << endl;
  return 0;
}
*/


/*

#include <iostream> 
using namespace std;
int main () {
  double d;
  d = sqrt(5);
  printf("%.8f \n", d);
  cout << d;
  return 0;
}

*/








#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n = 5;
int power(){
    int result = 1;
    
    if(n == 0){
        n++;
        return 1;
    }
    
    for(int i=0; i<n; i++){
        result *= n;   
    }
    n++;
    return result;
}


int main(){
    n=0;
    vector<int> v = {0,1,2,3,4,5};
    vector<int>::iterator it = v.begin();
    
    generate(v.begin(), v.end()+1, power);
    //[1, 5)
    
    for( ; it != v.end(); it++)
        cout << *it << ' ';
    return 0;
}

