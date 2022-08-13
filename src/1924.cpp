#include <bits/stdc++.h>
using namespace std;
int main(){
  int day,month;
  cin >> month >> day;
  int dayOfmonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
  /* 문자열 출력
char* dayOfweek[7] ={"SUN","MON","TUE","WEN","THU","FRI","SAT"}; */ // 여러개 문자열 선언시 char*
  int totalday = 0;
  totalday += day;
  for(int i=0;i<(month-1);i++){
    totalday += dayOfmonth[i];
  }
 // cout << dayOfweek[totalday%7];
  
  // switch 를 이용한 출력
    switch(totalday%7){
    case 0 :
    cout << "SUN";
    break;
    case 1 :
    cout << "MON";
    break;
    case 2 :
    cout << "TUE";
    break;
    case 3 :
    cout << "WED";
    break;
    case 4 :
    cout << "THU";
    break;
    case 5 :
    cout << "FRI";
    break;
    case 6 :
    cout << "SAT";
    break;
  }
  return 0;
}