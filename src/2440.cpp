#include <bits/stdc++.h>
using namespace std;
int main(){
	int n ;
  cin >>n ;
	for(int i=1;i<n+1;i++){
      for(int j=0;j<(n+1)-i;j++){
        cout << "*" ;
      }
    cout<< endl;
	}
	return 0;
}