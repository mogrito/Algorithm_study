#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  int num[1000000];

  cin >> n;
  for(int i=0; i<n; i++){
    cin >> num[i];
  }
  sort(num , num+n);
  for(int i=0; i<n; i++){
    cout << num[i] << "\n";
  }
  return 0;
    
}