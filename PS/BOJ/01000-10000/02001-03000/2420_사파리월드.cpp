// N과 M을 입력받는다 // 두 정수 입력
// 차이 = N - M을 계산한다 // 뺄셈
// 만약 차이가 0보다 작으면 차이에 -1을 곱한다 // 절댓값으로 만들기
// 차이를 출력한다 // 결과 출력


#include <iostream>
using namespace std;

int main() {
    long long N, M;
    cin >> N >> M;

    long long diff = N - M;
    if (diff < 0) diff = -diff;

    cout << diff << "\n";
    return 0;
}