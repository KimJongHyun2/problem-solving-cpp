/*
sudo code
숫자를 거꾸로 읽음
큰 숫자를 출력
*/

#include <iostream>

using namespace std;

int main(){

    int a,b;
    cin >> a >> b;

    int a1 = a / 100;
    int a2 = a % 100 / 10;
    int a3 = a % 10;

    int newa = a3 * 100 + a2 * 10 + a1;

    int b1 = b / 100;
    int b2 = b % 100 / 10;
    int b3 = b % 10;

    int newb = b3 * 100 + b2 * 10 + b1;

    if(newa > newb){
        cout << newa;
    }

    else{
    cout << newb;}

    return 0;

}
    














