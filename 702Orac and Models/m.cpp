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
    ll n;
    cin>>n;
    deque<ll>v(n+1);
    deque<ll>dp(n+1,1);
    for(ll i=1;i<=n;i++){
        cin>>v[i];
    }

    for(ll x=n;x>=1;x--){
        for(ll i=2*x;i<=n;i+=x){
            if(v[i]>v[x]){
                dp[x]=max(dp[x],dp[i]+1);
            }
        }
    }
    ll mx=*max_element(dp.begin(),dp.end());
    cout<<mx<<endl;
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