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
    ll n,k;
    cin>>n>>k;
    ll dp[k+1][n+1]={0};
    for(ll i=1;i<=n;i++) dp[1][i]=1;

    for(ll i=2;i<=k;i++){
        for(ll j=1;j<=n;j++){
            for(ll l=j;l<=n;l+=j){
                dp[i][l]=dp[i][l]+dp[i-1][j]%1000000007;
            }
        }
    }
    ll ans=0;
    for(ll i=0;i<=n;i++){
        ans=(ans+dp[k][i])%1000000007;
    }
    cout<<ans<<endl;
}

signed main() {
    MIR183_PC;
    // Always use ll, int may give TLE
    ll tt;
    tt=1;
    // cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}