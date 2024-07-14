#include <iostream>
#include<deque>
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
    deque<ll>v(n+1);
    for(ll i=1;i<=n;i++){
        cin>>v[i];
    }

    ll ans=0;
    for(ll i=1;i<=n;i++){
        ll pos=1;
        for(ll j=i+1;j<=n;j++){
            if(v[j]<=v[j-1])pos++;
            else break;
        }
        for(ll j=i-1;j>=1;j--){
            if(v[j]<=v[j+1])pos++;
            else break;
        }
        ans=max(ans,pos);
    }
    cout<<ans<<endl;

}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll t;
    // cin >> t;
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}