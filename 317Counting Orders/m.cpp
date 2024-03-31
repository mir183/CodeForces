#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

ll mod=1e9+7;

void solve() {
    // Your code here
    ll n;
    cin>>n;
    vector<ll>a(n);
    vector<ll>b(n);

    for(auto i=0;i<n;i++)cin>>a[i];
    for(auto i=0;i<n;i++)cin>>b[i];
    ll res=1;

    sort(a.begin(),a.end());
    sort(b.begin(),b.end(),greater<ll>());

    for(auto i=0;i<n;i++) {
        ll ans=a.size()-(upper_bound(a.begin(),a.end(),b[i])-a.begin());
        res=res*max(ans-i,0ll)%mod;
    }
    cout<<res<<endl;
}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    // t=1;
    while (t--) {
        solve();
    }
    return 0;
}