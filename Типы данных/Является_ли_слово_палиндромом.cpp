#include <bits/stdc++.h> 
using namespace std;
int main() {
    string i;
    cin >> i;
    char ii = 'i';
    for (int iii = 0; iii < i.size() / 2; iii++) {
        if (i[iii] != i[i.size() - iii - 1]) {
            ii--;
            break;
        }
    }
    if (ii == 'i') {
        cout << "yes";
    }
    else {
        cout << "no";
    }
    return 0;
}