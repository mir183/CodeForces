#include <iostream>
#include<map>

using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n;
    cin>>n;
    map<ll,ll>m;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        x%=3;
        m[x]++;
    }
    ll ans=m[0];
    ll mn=min(m[1],m[2]);
    ans+=mn;
    m[1]-=mn;
    m[2]-=mn;
    ll fx=m[1]+m[2];
    fx/=3;
    ans+=fx;
    cout<<ans<<endl;
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