#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    for (ll i = 0; i < n; i++) cin >> a[i];
    for (ll i = 0; i < m; i++) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());

    ll res=0;
    while (a.size()){
        if(abs(b[0]-a[0])>=abs(b.back()-a.back())){
            res += abs(b[0]-a[0]);
            b.erase(b.begin());
            a.erase(a.begin());
        }
        else{
            res += abs(b.back()-a.back());
            b.pop_back();
            a.pop_back();
        }
    }

    cout << res << endl;
}

int main() {
    fasterio;
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
