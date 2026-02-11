/*
sudo code
큐브 돌리기
몇번 돌렸을때 최댓값이 되는지 출력
*/

#include <iostream>

using namespace std;

int main(){

    double a, b, c, d;

    cin >> a >> b >> c >> d;

    int result = 0;

    double arr[] = {
    a/c + b/d,
    c/d + a/b,
    d/b + c/a,
    b/a + d/c};
    double best = arr[0];

    for(int i=0; i<4; i++){
        if(arr[i] > best){ // arr[i] > best 이면
            best = arr[i]; // best를 갱신하는고 (맞네 best값도 갱신을 해야되네)
            result = i; // 그 i을 result로 갱신하는거네
        }
    }
    cout << result;
}

/*
최댓값을 기준으로
arr[i] > 최댓값일때
갱신;
*/