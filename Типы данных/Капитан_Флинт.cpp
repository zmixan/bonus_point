#include <bits/stdc++.h>
using namespace std;
string c;
int g;
int main() {
    cin >> c >> g;
    if (c == "North") {
        cout << 0 << ' ' << g;
    }
    else if (c == "South") {
        g *= -1;
        cout << 0 << ' ' << g;
    }
    else if (c == "East") {
        cout << g << ' ' << 0;
    }
    else {
        g *= -1;
        cout << g << ' ' << 0;
    }
    return 0;
}