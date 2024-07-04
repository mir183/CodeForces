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
    ld ans=0.0;
    if(n==1){
        cout<<fixed<<setprecision(12)<<1.0<<endl;
        return;
    }
    for(ll i=1;i<=n;i++){
        ans+=(1.0/i);
    }
    cout<<fixed<<setprecision(12)<<ans<<endl;
    
}

signed main() {
    MIR183_PC;
    // Always use ll, int may give TLE
    ll t;
    // cin >> t;
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}