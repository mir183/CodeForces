//#include<bits/stdc++.h> //Uncomment while submitting
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
    const ll INF = 1e18;
    ll n,a,b,c;
    cin>>n>>a>>b>>c;
    deque<ll>dp(n+1,-INF);
    dp[0]=0;
    for(ll i=a;i<=n;i++){
        dp[i]=max(dp[i],dp[i-a]+1);
    }
    for(ll i=b;i<=n;i++){
        dp[i]=max(dp[i],dp[i-b]+1);
    }
    for(ll i=c;i<=n;i++){
        dp[i]=max(dp[i],dp[i-c]+1);
    }
    cout<<dp[n]<<endl;
}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll tt;
    tt=1;
    // cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}