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
    ll n,k;
    cin>>n>>k;
    deque<ll>v(k);
    for(ll i=0;i<k;i++)cin>>v[i];
    sort(v.begin(),v.end(),greater<ll>());
    ll ans=0;
    // ans+=v[0];
    for(ll i=1;i<k;i++){
        ans+=v[i]-1;
        ans+=v[i];
        
    }
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