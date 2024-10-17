#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, s, d, m;
    cin >> a >> s >> d >> m;
    if (abs(a - d) == abs(s - m))
        cout << "YES";
    else
        cout << "NO";
    return 0;
    }