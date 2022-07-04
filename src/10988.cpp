/*
 * 백준 : 10988 / reverse-> /
 */

#include<bits/stdc++.h>
using namespace std;

string s, tmp;

int main(){
    cin >> s;
    tmp = s;
    reverse(s.begin(), s.end()); 
    if (s == tmp) cout<<1;
    else cout << 0;
    return 0;
}
