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
    ll n;
    cin>>n;
    deque<ll>d;
    for(ll i=0;i<n-1;i++){
        ll x;
        cin>>x;
        d.push_back(x);
    }
    cout<<d[0]<<" ";
    for(ll i=1;i<n-1;i++){
        ll x=min(d[i-1],d[i]);
        cout<<x<<" ";
    }
    cout<<d[n-2]<<endl;
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