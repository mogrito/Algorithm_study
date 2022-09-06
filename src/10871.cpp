#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,x;
    int A[10000];
    cin >> n >> x;
    for(int i=0; i<n; i++){
      cin >> A[i];
    }
  for(int i=0; i<n; i++){
    if(A[i]<x){
      cout << A[i] <<" ";
    }
  }
  return 0;
}