#include <bits/stdc++.h>
using namespace std;

int main(){
  int T=0;
  string s;
  cin >> T;
  for(int i=0; i<T; i++){ // 테스트케이스 만큼 반복
    cin >> s;
    int acum = 0;
    int sum =0;// 문자열 받음 , 초기화
    for(int i=0; i<s.length();i++){
      if(s[i]=='O'){
        acum++;
      }
      else {
        acum = 0;
      }
      sum += acum;
    }
    cout << sum << '\n';
    }
return 0;
}