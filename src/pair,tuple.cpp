#include <bits/stdc++.h>
using namespace std;

pair<int, int> pi;
tuple<int, int, int> tl;
int a,b,c;
int main (){
  pi = {1,2};
  a= pi.first; // pi 자료구조에서 first
  b= pi.second; // pi 자료구조에서 second
  cout << a << ":" << b << "\n"; // 1:2
  ti = make_tuple(1,2,3);
  a = get<0>(ti); // 배열에서 꺼내는것 같음
  b = get<1>(ti);
  c = get<2>(ti);
  cout << a << " : " << b << " : " << c <<\n ;
  return 0 ;
  }