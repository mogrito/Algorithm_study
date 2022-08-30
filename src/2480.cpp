#include <bits/stdc++.h>
using namespace std;

int main() {
  int price;
  int dice[3];
  for(int i =0; i<3;i++){
    cin >> dice[i];
  }
  
  sort(dice , dice+3);

  if(dice[0]==dice[2]){
    price = 10000+(dice[2]*1000);
  }
  else if(dice[0]==dice[1]){
    price = 1000+(dice[0]*100);
  }
  else if(dice[1]==dice[2]){
    price = 1000+(dice[2]*100);
  }
  else{
    price = dice[2]*100 ;
  }
  cout << price ;
  return 0;
}