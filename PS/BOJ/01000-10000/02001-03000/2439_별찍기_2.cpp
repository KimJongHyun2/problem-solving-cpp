// 수도코드
// 1번째부터 n번째 줄까지
// 공백을 n-i번 출력
// 별은 i번
// 줄바꿈

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {                
        for (int j = 1; j <= N - i; j++) {       
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {            
            cout << "*";
        }
        cout << "\n";                              
    }
    return 0;
}