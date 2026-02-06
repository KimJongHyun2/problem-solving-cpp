// sudo code
// 영어대소문자 & 공백
// 스페이스의 개수를 세면 될거 같은데 라기엔 처음에 공백이 들어가도 됨

// >> cnt 라는걸 생각을 해야된다

#include <iostream>
#include <string> //문자열 쓰려면 필요

using namespace std; // 또 까먹었네 망할

int main(){

    string s;
    getline(cin,s);
    // 스트링(문자열) 써주고 getline으로 문자열 전체 입력받기
    
    int cnt = 0;


        // (1) 첫 글자가 문자면 1개로 센다
    if (s.length() > 0 && s[0] != ' ') {
        cnt = 1;
    }
    // for(int i=0; i< s[i-1]; i++ ) 내 오답
    for(int i=1; i < s.length(); i++){
        if (s[i] != ' ' && s[i-1] == ' '){
            cnt++;
        }

    }

    cout << cnt;

    
return 0;
}

// // 이 문제의 키
// 보자마자 cnt 라는걸 알아야되고
// 문자를 쓰네 char string s 이런생각
// 공백 >> ' ' 이걸 알아야된다.
// = 은 대입 == 이 맞는표현
// 첫 글자가 문자면 1개로 센다