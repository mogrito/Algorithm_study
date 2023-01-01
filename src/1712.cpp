#include <bits/stdc++.h>
using namespace std;

int main() {
  int a ,b ,c ,ans =0;
  cin >> a >> b >> c;

  if(b>=c)
    cout << -1;
  else{
    ans = a / (c-b) +1;
    cout << ans;
  }
  
  return 0;
}