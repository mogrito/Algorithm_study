#include <bits/stdc++.h>
using namespace std;

int main() {
  int sum;
  int total=0;
  int n;
  int price[100];
  int num[100];

  cin >> sum >> n;
  
    for(int i=0; i<n; i++){
      cin >> price[i] >> num[i] ;
    }
    for(int i=0; i<n; i++){
      total += price[i]*num[i];
    }
  
  if(sum==total){
    cout << "Yes";
  }
  else{
    cout << "No";
  }
    return 0;
  }