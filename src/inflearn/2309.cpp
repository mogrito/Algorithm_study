#include<bits/stdc++.h>
using namespace std;
// 9개의 수자 주어지고, 7개의 숫자를 뽑아 100을 넘지않게 해야한다.
int a[9]; // 배열선언
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    for(int i = 0; i<9; i++){ // 배열 입력받기
        cin >> a[i];
    }
    sort(a,a + 9); // 정렬
    do{ // 순열뽑기 반복
        for(int i : a)cout << i << " ";
        cout << '\n';
        int sum=0;
        for(int i = 0; i <7; i++) sum += a[i]; // 7개 슬라이스
        if(sum == 100)break; // 합이 100이면 멈춤
    }while(next_permutation(a,a+9));
    for (int i = 0; i < 7; i++) cout << a[i] << "\n";
    return 0;
}
