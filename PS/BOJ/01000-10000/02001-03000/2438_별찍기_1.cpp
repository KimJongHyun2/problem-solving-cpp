// //수도코드
// 1
// 11
// 111
// 1111 
// 이런식

// 몇줄 출력받을지 N 입력받는다
// 1번부터 n줄까지
// i번째 줄에는 i개 출력

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {         
        for (int j = 1; j <= i; j++) {     
            cout << "*";
        }
        cout << "\n";                      
    }
    return 0;
}