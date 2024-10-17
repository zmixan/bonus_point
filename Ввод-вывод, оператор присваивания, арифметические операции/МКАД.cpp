#include <bits/stdc++.h>
using namespace std;

int main() {
    int v, t;
    cin >> v >> t;
    int distance = v * t;
    int position = (0 + distance) % 109;
    if (position < 0) {
        position += 109;
    }
    cout << position << endl;
    return 0;
}