#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, s, d, m;
    cin >> a >> s >> d >> m;
    for (int i = a; i <= s; i++) {
        if (i % m == d) 
            cout << i << ' ';
    }
    return 0;
}