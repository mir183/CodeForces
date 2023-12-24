#include<bits/stdc++.h>
using namespace std;

#define ll long long int
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
        set<char> substrings;
        ll ans=0;
        for(ll i=0; i<n; i++) {
            substrings.insert(s[i]);
            ans+=substrings.size();

        }

        cout << ans << endl;
    }

    return 0;
}