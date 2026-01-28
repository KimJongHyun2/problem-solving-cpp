#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int A;

    for (int i = 0; i < 5; i++) {
        cin >> A;
        sum += A;
    }

    cout << sum << '\n';
    return 0;
}