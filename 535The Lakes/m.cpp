#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

ll n, m;
deque<deque<ll>> dp;
deque<deque<bool>> vis;

ll dfs(ll i, ll j) {
    if (i < 0 || j < 0 || i >= n || j >= m || dp[i][j] == 0 || vis[i][j]) {
        return 0;
    }
    vis[i][j] = true;
    ll ans = dp[i][j];
    ans += dfs(i + 1, j);
    ans += dfs(i - 1, j);
    ans += dfs(i, j + 1);
    ans += dfs(i, j - 1);
    return ans;
}

void solve() {
    cin >> n >> m;
    dp.assign(n, deque<ll>(m, 0));
    vis.assign(n, deque<bool>(m, false));
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            cin >> dp[i][j];
        }
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            if (!vis[i][j] && dp[i][j] != 0) {
                ans = max(ans, dfs(i, j));
            }
        }
    }
    cout << ans << endl;
}

signed main() {
    MIR183_Mac;
    ll tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}