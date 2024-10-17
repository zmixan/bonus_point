#include <bits/stdc++.h>
using namespace std;
int main() {
    string n;
    getline(cin, n);
    int g = 0;
    string h;
    for (int i = 0; i < n.size(); i++) {
        int l = 0;
        if (n.find(' ') != string::npos) {
            for (int j = 0; j < n.find(' '); j++) {
                l++;
            }
        }
        else {
            for (int j = 0; j < n.size(); j++) {
                l++;
            }
        }
        if (g < l) {
            g = l;
            h = n.substr(0, l);
        }
        n.erase(0, l + 1);
    }
    cout << h << endl << g;
    return 0;
}