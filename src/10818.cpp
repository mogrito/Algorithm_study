#include <bits/stdc++.h>
using namespace std;
int main() {
  int n ;
  cin >> n;
  
  int num[1000001];
  
  for(int i=0; i<n; i++){
    cin >> num[i];
  }
  
  sort(num , num+n);
  cout << num[0] << " " << num[n-1] ;
  return 0;
}