#include <iostream>

using namespace std;

int main() {
 double a,b; // 소숫점 아래 9자리 double형으로 사용 , 자료형공부 더필요
  cin >> a >> b;
  cout.precision(10); // cout 출력 조절 큰수부터 ~ 까지 출력
  cout << a/b ;
  return 0;
}