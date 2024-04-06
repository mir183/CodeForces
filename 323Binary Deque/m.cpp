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
    ll n,s;
    cin>>n>>s;
    deque<ll>v(n+1),p(n+1);
    for(ll i=1;i<=n;i++){
        cin>>v[i];
    }
    p[0]=0;
    for(ll i=1;i<=n;i++){
        p[i]=p[i-1]+v[i];
    }
    ll ans=1e10;
    if(p[n]<s){
        cout<<"-1"<<endl;
        return;
    }

    for(ll i=1;i<=n;i++){
        ll k=p[i-1]+s;
        if(p[n]<k){
            continue;
        }else{
            auto it=upper_bound(p.begin(),p.end(),k);
            it--;
            ll d=(it-p.begin());
            ans=min(ans,n-(d-i+1));
        }
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