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
    ll n,k;
    cin>>n>>k;
    deque<ll>a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    deque<ll>v;
    for(ll i=1;i<n;i++){
        v.push_back(a[i-1]-a[i]);
    }
    sort(v.begin(),v.end());
    ll res=a[n-1]-a[0];
    for(ll i=0;i<k-1;i++){
        res+=v[i];
    }
    cout<<res<<endl;
}

signed main() {
    MIR183_PC;
    // Always use ll, int may give TLE
    ll tt;
    tt=1;
    // cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}