#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        set<string> substrings;

        for (int i = 0;i<n;i++) {
            for (int j=1;j<=n-i;j++) {
                string sub=s.substr(i, j);
                substrings.insert(sub);
                // if (sub.size()>1) {
                //     substrings.insert(sub.substr(1));
                //     substrings.insert(sub.substr(0, sub.size() - 1));
                // }
            }
        }

        cout << substrings.size() << endl;
    }

    return 0;
}