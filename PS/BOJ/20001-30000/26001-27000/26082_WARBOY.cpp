// sudo code
// A, B, C를 입력받는다 // 입력
// R = r / A // 성능 대비 가격 비율(r)
// a = r * C // WARBOY 성능 계산
// answer를 출력한다 // 결과

#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int r = B / A;      // 경쟁사 성능 대비 가격
    r = r * 3;      // WARBOY는 3배 더 좋음 (⭐핵심 수정 부분)

    int result = r * C; // WARBOY 성능
    cout << result << "\n";

    return 0;
}