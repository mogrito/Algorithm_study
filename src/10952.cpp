#include <bits/stdc++.h>
using namespace std;

int main (){
  int a,b;

while (cin >> a >> b){
  if (a==0 && b ==0) {
    break;
  }
   cout << a+b << endl; //서순 주의 출력이 위에 있을경우 정답 x
}    
  return 0;
}