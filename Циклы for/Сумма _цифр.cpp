#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, sum = 0;
    cin >> a;
    for (int i = a; i > 0; i /= 10)
        sum += (i % 10);
    cout << sum;
    return 0;
    }