#include <bits/stdc++.h>
using namespace std;

int main() {
    long int a, sum = 2;
    cin >> a;
    for (int i = 2; i <= sqrt(a); i++) {
        if (a % i == 0) {
            if (i == a / i) {
                sum++;
            } else {
                sum += 2;
            }
        }
    }
    if (a <= 1) {
        sum = 1;
    }
    cout << sum;
    return 0;
}