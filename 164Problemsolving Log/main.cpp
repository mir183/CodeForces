#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    fasterio;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0;
        map<char, int> mp;
        for (int i = 0; i < n; i++) {
            mp[s[i]]++;
            if (mp[s[i]]==s[i]-'A'+1) {
                ans++;
            }
        }
        cout << ans << endl;

    }

    return 0;
}
