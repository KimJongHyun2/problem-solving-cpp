/*
sudo code
팬린드롬(좌우대칭 단어) 찾기
생각해보기
좌우가 대칭이다 > 어떻게 표현할까

*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;

    for(int i=0; i<s.length()/2;i++){
        if (s[i] != s[s.length()-1-i]){
            cout << "0";
            return 0;

        }
        
    }

    cout <<"1";





}