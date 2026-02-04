// 문자열 id를 입력받는다 
// id 뒤에 "??!"를 붙인다 
// 결과를 출력한다 




#include <iostream>
#include <string>
using namespace std;

int main() {
    string id;
    cin >> id;          // 아이디 입력

    cout << id << "??!" << "\n";  // 아이디 뒤에 ??! 붙여서 출력
    return 0;
}