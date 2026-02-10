/*
sudo code
fbi 요원찾기
문자에 fbi 가 있으면 몇줄인지 출력
*/

#include <iostream>
#include <vector>
#include <string>


using namespace std;
int main() {
    string name;
    bool found = false;

    for(int i=1; i<6; i++){
    cin >> name;{}

        if(name.find("FBI") != string::npos){
            if (found) cout << " ";
            cout << i;
            found = true;

        }   
    }   
    if (!found){
        cout << "HE GOT AWAY!";
    }
    return 0;
}

/*
이 문제의 핵심
아직 시작하기 전에는 못참음 

>> bool found = false; 라고 시작
find를 써서 
s.find 라는걸 사용 
여기서 왜 기본적으로 string s라 하는지 알 수 있음
s.find > name.find로 씀 나는

*/