#include <bits/stdc++.h>
using namespace std;

int main() {
    long int a;
    cin >> a;
    for (int i = 1; i <= a; i++) {
        if (a % i == 0) {
            cout << i << ' ';
        }
    }
    return 0;
}