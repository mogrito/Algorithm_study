#include<bits/stdc++.h>
using namespace std;

int main(){
  int remain[42]={0};
  int a;
  int count=0;
  
  for(int i=0; i<10; i++){
    cin >> a;
    remain[a%42] = 1 ;
  } 
  for(int j =0; j<42; j++){
    if(remain[j]){
      count++;
    }
  }
  cout << count;
  return 0;
}