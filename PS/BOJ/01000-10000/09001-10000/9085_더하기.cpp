/* 
sudo code
cin >> T(몇개) 테스트 케이스 개수
자연수의 개수 N
N개 만큼 자연수
자연수들 더 한거 출력
*/

// #include <iostream>

// using namespace std;

// int main() {


//     int t, N;
//     cin >> t;

//     for(int i=0;i<t;i++){
//         cin >> N;
        
//         int sum = 0;

//         for(int j=0;j<N;j++){
//             int n;
//             cin >> n;
//             sum = sum + n; 
//         }

//         cout << sum << "\n";

//     }
// }



#include <iostream>

using namespace std;

int main() {

    int t;
    int N;

    cin >> t;

    for(int i=0;i<t;i++){
        cin >> N;

        int sum = 0;

        for(int j=0;j<N;j++){
            int n;
            cin >> n;
            sum = sum + n; 
        }

        cout << sum << "\n";

    }


}