// sudo code
// N 입력받음 (정수의 개수)
// 두번째줄 N만큼 개수 입력받음 공백 구분
// 세번째줄 찾고자 하는 정수 v 입력

#include <iostream>
#include <vector>
using namespace std;
    
int main() {
    int N;
    cin >> N;

    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    int v;
    cin >> v;

    int cnt = 0;
    for (int i=0; i<N; i++) {
        if (a[i] == v)
        cnt++;
    }

    cout << cnt;
    return 0;
}


// #include <iostream>
// #include <vector>
// //#include <algorithm>

// using namespace std;

// int main() {
//     int n, num, v;
//     int cntv;
//     int count = 0;
//     vector<int> vec;

//     cin >> n;

//     for(int i = 0; i < n; i++) {
//         cin >> num;

//         vec.push_back(num);
//     }

//     cin >> v;

//     //cntv = count(vec.begin(), vec.end(), v);

//     for(int i = 0; i < vec.size(); i++) {
//         if(vec[i] == v) {
//             count++;
//         }
//     }

//     cout << count;

//     return 0;
// }