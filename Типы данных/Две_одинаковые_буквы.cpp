#include <bits/stdc++.h>
using namespace std;
int main() {
    string g;
    cin >> g;
    for (int i = 0; i < g.size() - 1; i++) {
        for (int j = i + 1; j < g.size(); j++) {
            if (g[i] == g[j]) {
                cout << g[i];
                break;
            }
        }
    }
    return 0;
}