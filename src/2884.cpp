#include <bits/stdc++.h>
using namespace std;

int main() {
  int h,m;
  cin >> h >> m ;
  
if(m<45){
  h = h-1;
  m = m+15;
    if(h<0){
      h = 23;
    }
  }
else{
  m = m-45;
}
  cout << h << m;
  return 0;
}