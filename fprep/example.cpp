#include <bits/stdc++.h>
using namespace std;

void FindMode(int arr[], int n){
    int cnt = 1, max = 0, mode = arr[0], modeCnt = 0, modes[modeCnt];	
    
    for(int i = 0; i < n - 1; i++){
        if(arr[i] == arr[i + 1]){
            cnt++;
            if(cnt > max){
                max = cnt;
                mode = arr[i];
            }
            if(cnt == max || modes[modeCnt] != modes[modeCnt + 1]){
        	modes[modeCnt] = arr[i];
        	modeCnt++;
	        }
        }
        else{
            cnt = 1; 
        } 
    }

	if(modeCnt == 0){
        sort(arr, arr + n, greater<int>());
	    for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	    }
	}
	else{
	    for(int i = 0; i < modeCnt; i++){
	 	cout << modes[i] << " ";
	    }	
	}
}

int main(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    FindMode(arr, n);
    return 0;
}









/* #include <iostream>
using namespace std;

int main()
{

   int N{0}, vector[100], even[100], odd[100], merge[100], i{0}, j{0}, k{0}, l{0};

   cout << "Add the dimension: " << endl;
   cin >> N;
   cout << "Add the elements: " << endl;

   for (int i = 0; i < N; i++)
   {

      cout << "v[" << i << "]=" << endl;
      cin >> vector[i];
   }

   for (i = 0; i < N; i++)
   {
      if (vector[i] % 2 == 0)
      {
         even[j] = vector[i];
         j++;
      }
      else if (vector[i] % 2 != 0)
      {
         odd[k] = vector[i];
         k++;
      }
   }

  /* cout << "even elements are :" << endl;

   for (i = 0; i < j; i++)
   {
      cout << " " << even[i] << " ";
      cout << endl;
   }

   cout << "Odd elements are :" << endl;

   for (i = 0; i < k; i++)
   {
      cout << " " << odd[i] << " ";
      cout << endl;
   }
   
   */

 /*  for (i = 0; i < k; i++)
   {
      merge[i] = even[i];
   }
   for (; i < j + k; i++)
   {
      merge[i] = odd[i - k];
   }

   for (int i = 0; i < N; i++){
      cout << merge[i] << " ";
   }
   return 0;
}
*/


// cout << (a == b ? "Yes" : "No") << endl; 










/* void mergeSort(int a[], int start, int end){
    if(start < end){
        int mid = (start + end) / 2;
        mergeSort(a, start, mid);
        mergeSort(a, mid + 1, end);
        merge(a, start, mid, end);
    }
}

void merge(int[] a, int start, int mid, int end){
    int[] temp = new int[end - start + 1]; //  is a new temporary array
    int i = start, j = mid + 1, k = 0; 
} */



/* int sumtilln(int n){
    if(n <= 1){
        return n;
    }

    return n + sumtilln(n - 1);
}

int main(){
    int n; cin >> n;

    cout << sumtilln(n) << endl;
} */

/*int main(){
    int n;
    cin >>n;
    int a[n];
for (int i=0; i<n; ++i){
    cin >> a[i];
} 
sort (a, a+n, greater<int>());
for (int i = 0; i < n; i++)
    cout << a[i] << " ";
return 0;
} */



//pop back
//swap //swaps 1 strign with another
//str1.swap(str2);

//freopen("inout.txt", "r", stdin);

//getline(cin, str, ";")

//int arr[n][n];

//int maximum=arr[0][0];
//maximum= max(maximum, arr[i][j]);


/* #include <iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int svn=0;
    for(int i=0; i<n; ++i){
        int a;
        cin>>a;
        if(a%10==7){
            svn++;
        }
    }
    cout<<svn;
    return 0;
} */


//e.cpp from lab3!!!!!!!
/* #include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n];
    int sum=0;
    for(int i=0; i<n; ++i){
        cin>>a[i];
        sum += a[i];
    }
    cout<<sum;
    return 0;

} */




/* #include <iostream>
using namespace std;
int main(){
    int n; cin>>n;
    if(n==1){
        cout<<"No";
        return 0;
    }

    for(int i=2; i*i<=n; ++i){
        if(n%i==0){
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
    return 0;

}
*/





//using namespace std;
//  int main (){
  //  int n; cin >> n;
    //int arr[n];
    //int max=0; 
    //for(int i=0; i<n; ++i){
    //    cin>>arr[i];
        //max=arr[0];
      //  if(arr[i]>max){
        //    max=arr[i];
        //}
    //}
    //cout<<max;
   // return 0;
//}