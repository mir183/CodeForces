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
    ll n, k;
    cin>>n>>k;
    deque<ll> d(n);
    for(ll i=0; i<n; i++) cin>>d[i];
    sort(d.begin(), d.end());
    ll ans=1,cnt=1;
    for(ll i=1;i<n;i++){
        if(d[i]-d[i-1]>k){
            cnt=1;
        }else{
            cnt++;
        
        }
        ans=max(ans,cnt);
    }
    cout<<n-ans<<endl;
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