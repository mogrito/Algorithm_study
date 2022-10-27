#include <bits/stdc++.h>
using namespace std;

int main(){
cin.tie(NULL); // cin 과 cout 의 묶음을 풀어줌
ios_base::sync_with_stdio(false);
//stido 와 cpp의 동기화를 비활성화 , c++ 의 독립적인 버퍼생성, c의 버퍼사용 불가
// 하지만 사용하는 버퍼의 수가 줄어 실행속도가 증가
  
  int t;
  int A,B;
  cin >> t;
  for(int i=0; i<t; i++){
    cin >> A >> B ;
    cout << A+B << "\n";
  }
  return 0;
}