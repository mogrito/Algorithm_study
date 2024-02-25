#include<bits/stdc++.h>
using namespace std;
string dopa = "abcde";
int main (){
    //3개출력
    cout << dopa.substr(0,3) << '\n';
    //거꾸로출력
    reverse(dopa.begin(),dopa.end());
    cout << dopa << '\n';
    //엄준식추가
    cout << dopa + "umzunsik" << '\n';
    return 0;
}