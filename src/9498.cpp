#include <bits/stdc++.h>
using namespace std;

int main() {
  int g;
  cin >> g;
  if(g>=90){
    cout << "A";
  } 
  else if(g>=80){
    cout << "B" ;
  }
   else if(g>=70){
    cout << "C" ;
  }
   else if(g>=60){
    cout << "D" ;
  }
   else{
    cout << "F" ;
  }
  return 0;
}