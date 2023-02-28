#include <bits/stdc++.h>

using namespace std;

int main()
{
    int piece[6] = {1,1,2,2,2,8};
    int inpiece[6]={};
    int setpiece[6]={};
    
    for(int i=0; i<6; i++){
      cin >> inpiece[i];
    } 
    for(int i=0; i<6; i++){
     setpiece[i] = piece[i] - inpiece[i];   
    }
    for(int i=0; i<6; i++){
     cout << setpiece[i];    
    }
    
    return 0;
}