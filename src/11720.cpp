#include <bits/stdc++.h>
using namespace std;
int n;
int sum=0;
string s; // string 으로 먼저 붙어있는 문자열을 받음
int main(){
  cin >> n >> s ;
  for(int i=0; i<n; i++){
    sum += s[i]-'0'; //배열로 1번째 부터 접근, 문자열에서는 ASCII 로 연산하기 때문에
                    //(0=48 .. 1=49..) 48을 뺴줘야함, 때문에 -'0' 차례로 더하기
  }
cout<<sum; 
  return 0;
}