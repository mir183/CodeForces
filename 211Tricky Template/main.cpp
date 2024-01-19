#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    ll n;
    cin >> n;
    string a,b,c;
    cin >> a >> b >> c;

for (ll i = 0; i < n; i++) {
        if ((islower(a[i]) && a[i] != b[i]) || (isupper(a[i]) && a[i] == b[i]) || (islower(a[i]) && a[i] != c[i])) {
            no;
            return;
        }
    }

    yes;
}

int main() {
    fasterio;
    // Always use ll, int may give TLE
    ll tc;
    cin >> tc;
    // t=1;
    while (tc--) {
        solve();
    }
    return 0;
}