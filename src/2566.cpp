#include <iostream>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  
    int ary[9][9]={};
    int a = -1;
    int r ,c =0;
  
    for(int i =0; i<9; i++){
      for(int j =0; j<9; j++){
        cin >> ary[i][j] ;
        
        if(ary[i][j] > a){
          a = ary[i][j] ;
          r = i+1;
          c = j+1;
        }
      }
    }
    cout << a << endl << r << " " << c <<endl;
  return 0 ;
  }