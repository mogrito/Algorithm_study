#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  while (s!=" "){
    getline(cin,s); // cin은 개행문자를 구분하기떄문에 한줄씩 읽어들이는 getline 함수
    cout<< s <<endl;
    if(s == "")
      break;
  }
  return 0 ;
}