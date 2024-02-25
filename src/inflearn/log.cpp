#include <bits/stdc++.h>

using namespace std;

int N, cnt;
void solve(int N){
    int a = 0, i=N;
    while (i > 0) { // 입력받은 N 이 0보다 클때
        a += i;
        i /= 2;
        cnt++;
    }
    cout << a << '\n';
    cout << cnt << '\n';
}
int main(){
    cin >> N;
    solve(N);
    return 0;
}