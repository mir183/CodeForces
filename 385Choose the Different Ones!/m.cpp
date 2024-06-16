#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_PC ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n), b(m);
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]=1;
    }
    for (ll i = 0; i < m; i++) {
        cin >> b[i];
        if(mp[b[i]]==1) mp[b[i]]=LLONG_MAX;
        else if(mp[b[i]]==0) mp[b[i]]=2;
    }
    ll cnt1=k/2, cnt2=k/2;
    for(ll i=1; i<=k; i++) {
        if(mp[i]==1)cnt1--;
        if(mp[i]==2)cnt2--;
        if(mp[i]==0)cnt1=-1;
    }
    if(cnt1>=0 and cnt2>=0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

signed main() {
    MIR183_PC;
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    // t=1;
    while (t--) {
        solve();
    }
    return 0;
}