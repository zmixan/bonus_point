#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, s;
    cin >> a >> s;
    if (a > s)
        cout << 1;
    else if (a < s)
        cout << 2;
    else
        cout << 0;
    return 0;
    }