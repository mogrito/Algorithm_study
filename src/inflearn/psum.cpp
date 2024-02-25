#include <bits/stdc++.h>
using namespace std;

//prefixsum - 누적합
// 수의 개수 : N , 합을 구해야 하는 횟수 : M
// n,m 이 둘다 10만이라면 최대 10억이기떄문에 다른 알고리즘 필요 
int a[100004], b, c, psum[100004], n,m;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    for(int i = 1; i <=n; i++){
        cin >> a[i];
        psum[i] = psum[i-1] + a[i];
    }
    for(int i = 0; i<m; i++){
        cin >> b >> c;
        cout << psum[c] - psum[b-1] << "\n";
    }
    return 0;
}