#include<bits/stdc++.h> //Uncomment while submitting
#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl;

void solve() {
    // Your code here
    ll n,m;
    cin>>n>>m;
    vector<string>s(n);
    for(ll i=0;i<n;i++){
        cin>>s[i];
    }
    deque<deque<ll>>dp(n+1,deque<ll>(m+1,0));
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            if(s[i][j]=='*'){
                dp[i][j]=1;
            }
        }
    }
    for(ll i=n-1;i>=0;i--){
        for(int j=m-2;j>=1;j--){
            if(dp[i][j]==1){
                dp[i][j]=1+min({dp[i+1][j-1],dp[i+1][j],dp[i+1][j+1]});
            }
        }
    }
    ll ans=0;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            ans+=dp[i][j];
        }
    }
    cout<<ans<<endl;

}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll tt;
    tt=1;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}