/*
sudo code
대칭 별찍기
i=0: 공백0, 별9 >> 공백은 i개 만큼 별은 2n-1개 만큼

i=1: 공백1, 별7

i=2: 공백2, 별5

i=3: 공백3, 별3

i=4: 공백4, 별1

*/

#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout << " ";
        }

        for(int k=0;k<2*(n-i)-1;k++){
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}