#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, s = 0;
    cin >> a;
    s = (a / 100) + ((a % 100) / 10) + (a % 10);
    cout << s;
    return 0;
    }