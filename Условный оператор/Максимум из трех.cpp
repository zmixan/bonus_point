#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, s, d;
    cin >> a >> s >> d;
    if (a >= s && a > d)
        cout << a;
    else if (a < s && s > d)
        cout << s;
    else
        cout << d;
    return 0;
    }