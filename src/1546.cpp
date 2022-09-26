#include <bits/stdc++.h>
using namespace std;

int main(){
  int max=0;
  int n;
  double nscore=0;
  int score[1000]={};
  double avg;

  cin >> n;
  for(int i=0; i<n; i++){
    cin >> score[i] ;
  }
  sort(score,score+n);
  max = score[n-1];
  for(int i=0; i<n; i++){
    nscore += score[i];
  }
  avg = (nscore/max*100)/n;
  cout.precision(6);
  cout << avg;
return 0;
}