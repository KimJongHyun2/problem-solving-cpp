// sudo code
// 상근이는 알람 듣고 일어난다
// 사랑이란 멜로는없어~
// 45분 일찍 알람 > 알람 끄고 더 잠 > 정시 기상!

// cin >> H, M (H시 M분)
/*
시계문제 
H는 24시까지 M은 60분까지 있는데
45분 이상이면 그냥 빼도 되고 H도 그대로
45분 이하면 예를 들어 30분이었으면 -15가 되는데 45분이 되어야되니까
+60을 해야되고 대신 H-1이 되야겠네 가보자
*/

// hard 치고는 할만 하겠는데

//첫코드

// #include <iostream>

// using namespace std;

// int main(){
// int H,M;
// cin >> H >> M;


//     if (M >= 45){
//         cout << H << ' ' << M-45;
//     }

//     else if(M<45){
//         H--;
//         M = M -45 + 60;

//         cout << H << ' '<< M;


//         if (H == -1)
//         H = 23;

//         cout << H << ' '<< M;

//     }

// }

/*
내 첫코드에서 수정 할거
입력 줄에서 H랑 M을 둘 다 입력받기 // cin 두 개

else 안에서 cout은 한 번만 남기기 // 중복 제거

H == -1 처리까지 하고 나서 마지막에 출력 // 순서 중요
*/


#include <iostream>

using namespace std;

int main(){
int H,M;
cin >> H >> M;


    if (M >= 45){
        M = M -45;
    }

    else{
        H--;
        M = M -45 + 60;


        if (H == -1)
        H = 23;

    }
    
    cout << H << ' '<< M;

}