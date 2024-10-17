#include <bits/stdc++.h>
using namespace std;
int main() {
    string f, g;
    cin >> f >> g;
    int v = 1;
    for (int i = 0; i < g.size() - f.size() + 1; i++) {
        if (g.substr(i, f.size()) == f) {
            v = 0;
            break;
        }
    }
    if (v == 1) {
        cout << "no";
    }
    else {
        cout << "yes";
    }
    return 0;
}