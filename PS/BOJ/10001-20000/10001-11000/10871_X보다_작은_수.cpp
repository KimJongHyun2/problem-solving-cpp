//sudo
// N과 X를 입력받는다 // 개수와 기준값 입력
// i를 1부터 N까지 반복한다 // N개 숫자 처리
//     num을 입력받는다 // 수열의 원소 하나 입력
//     만약 num이 X보다 작으면 // 조건 검사
//         num과 공백을 출력한다 // 조건 만족하면 출력

#include <iostream>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;

        if (num < X) {
            cout << num << " ";
        }
    }
    return 0;
}