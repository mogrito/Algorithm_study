#include <bits/stdc++.h>
using namespace std;

int main() {
  int h,m,rm;
  int H,M;
  cin >> h >> m >> rm;
  if(m+rm<60){
    H = h;
    M = m+rm;
  }
  else{
    M = (m+rm)%60;
    H = (h+((m+rm)/60))%24;
  }
  cout << H << " " << M;
  return 0;
}