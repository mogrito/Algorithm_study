#include <bits/stdc++.h>
using namespace std;

int main() {
  int num;
  cin >> num;
  int init = num;
  int count=0;
  
  while(true){
    num = (num%10)*10+((num/10)+(num%10))%10;
    count++;
    
    if(init==num){
      break;
    }
  }
  cout << count << endl;
}