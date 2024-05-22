#include <iostream>
#include <algorithm>
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
    char dp[n][n];
    for(ll i=0;i<n;i++) {
        for(ll j=0;j<n;j++) {
            cin>>dp[i][j];
        }
    }
    ll ans=0;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            char a=dp[i][j];
            char b=dp[j][n-i-1];
            char c=dp[n-i-1][n-j-1];
            char d=dp[n-j-1][i];
            char mx=max({a,b,c,d});
            // char mn=min({a,b,c,d});
            ans+=(mx-a);
            ans+=(mx-b);
            ans+=(mx-c);
            ans+=(mx-d);
            dp[i][j]=mx;
            dp[j][n-i-1]=mx;
            dp[n-i-1][n-j-1]=mx;
            dp[n-j-1][i]=mx;

        }
    }
    // cout<<"ans:";
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