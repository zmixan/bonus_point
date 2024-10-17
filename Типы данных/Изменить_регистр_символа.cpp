#include <bits/stdc++.h>
using namespace std;
char t;
int main() {
    cin >> t;
    if (t > 96) {
        cout << (char)toupper(t);
    }
    else {
        cout << (char)tolower(t);
    }
    return 0;
}