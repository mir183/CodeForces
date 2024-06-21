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
    for(ll i=0;i<n;i++){
        cin>>d[i];
    }
    ll ans=-1;
    for(ll i=0;i<n;i++){
        ll l=0;
        for(ll j=0;j<n;j++){
            if(d[j]>i)l++;

        }
        if(l==i){
            ans=i;
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