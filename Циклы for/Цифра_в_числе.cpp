#include <bits/stdc++.h>
using namespace std;

int main() {
    long int x, d, count = 0;
    cin >> x >> d;
    for (long int i = x; i > 0; i /= 10) {
        if (i % 10 == d) {
            count++;
        }
    }
    cout << count;
    return 0;
}