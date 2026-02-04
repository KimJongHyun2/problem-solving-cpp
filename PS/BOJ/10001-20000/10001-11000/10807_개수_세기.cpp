#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

int main(){

    // 정수 n 입력받기 (n은 배열안에 들어가는 숫자 개수) >> arr[i] 입력받기
    // n만큼 정수 입력 받기
    // 찾고 싶은 정수 v입력
    // v가 배열안에서 몇개인지 알아내기

    int n;
    int v;
    int num;

    cin >> n;

    int arr[n];

    for(int i=0; i < n; i++) {
        cin >> num;
        arr[i] = num;
    }
    cin >> v;
    int sum = count(arr,arr+n,v);

    cout << sum;
    
    return 0;
}