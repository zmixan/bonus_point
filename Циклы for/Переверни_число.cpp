#include <bits/stdc++.h>
using namespace std;

int main() {
    long int a;
    cin >> a; 
    for (int i = a; i > 0; i /= 10) {
        cout << (i % 10);
    }
    return 0;
    }