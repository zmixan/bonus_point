#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, s, d, m;
    cin >> a >> s >> d >> m;
    if (abs(a - d) <= 1 && abs(s - m) <= 1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}