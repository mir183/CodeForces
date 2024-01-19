#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string a, b, c;
    cin >> a >> b >> c;

    string t = "";
    for (int i = 0; i < n; ++i) {
        if (a[i] != c[i] && b[i] != c[i]) {
            t += toupper(a[i]);
        } else if (a[i] == b[i] && a[i] != c[i]) {
            t += toupper(a[i]);
        } else {
            for (char ch = 'a'; ch <= 'z'; ++ch) {
                if (ch != a[i] && ch != b[i] && ch != c[i]) {
                    t += toupper(ch);
                    break;
                }
            }
        }
    }

    if (t.size() == n) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}