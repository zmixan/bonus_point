#include <bits/stdc++.h>
using namespace std;

int main() {
    long int a, s = 0;
    cin >> a;
    for (int i = 2; i <= sqrt(a); i++) {
        if (a % i == 0) {
            s = i;
            break;
        }
    }
    if (s == 0) {
        cout << a;
    }
    else {
        cout << s;
    }
    return 0;
}