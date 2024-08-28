#include <iostream>
#include<deque>
#include<algorithm>
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
    deque<ll>v(n);
    bool neg=false;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        if(v[i]<0)neg=true;
    }
    sort(v.begin(),v.end());
    ll ans=0;
    for(ll i=0;i<n;i++){
        ll target=i+1;
        ll x=v[i];
        ll mx=max(target,x);
        ll mn=min(target,x);
        ans+=abs(mx-mn);
    }
    // if(neg)ans++;
    cout<<ans<<endl;
}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll tt;
    tt=1;
    // cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}