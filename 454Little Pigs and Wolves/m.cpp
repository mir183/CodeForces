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
    ll n,m;
    cin>>n>>m;
    deque<deque<char>>dp(n+2,deque<char>(m+2,0));
    // deque<string>ds;

    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){
            char c;
            cin>>c;
            dp[i][j]=c;
        }
    }
    ll ans=0;
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){
            if(dp[i][j]=='W'){
                if(dp[i+1][j]=='P' or dp[i][j+1]=='P' or dp[i-1][j]=='P' or dp[i][j-1]=='P'){
                    ans++;
                }
            }
        }
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