#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, s;
    cin >> a >> s;
    for (int i = 0; i <= s; i += 2 * sqrt(i) + 1) {
        if (a <= i)
            cout << i << ' ';
    }
    return 0;
}