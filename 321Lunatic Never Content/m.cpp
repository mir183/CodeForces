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
    deque<ll>d(n);
    for(auto &i:d)cin>>i;
    deque<ll>dif;
    ll l=0,r=n-1;
    while (l<=r)
    {
        dif.push_back(abs(d[l]-d[r]));
        l++;
        r--;
    }
    ll ans=0;
    for(ll i=0;i<dif.size();i++){
        ans=__gcd(ans,dif[i]);
    }
    cout<<ans<<endl;
    
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