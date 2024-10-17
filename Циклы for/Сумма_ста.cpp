#include <bits/stdc++.h>
using namespace std;

int main() {
    long int a, sum = 0;
    for (int i = 1; i <= 100; i++) {
        cin >> a;
        sum += a;
    }
    cout << sum;
    return 0;
    }