#include <bits/stdc++.h>
using namespace std;
int main(){
  int n ;
  cin >> n;
  for(int i=1; i<n+1; i++) {
    cout << i << "\n"; // endl; 은 단순한 개행만이 아닌 버퍼를 지우는
                        // 작업도 같이 하기떄문에 시간문제로 \n 사용
  }
  return 0;
}