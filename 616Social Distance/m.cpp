#include<bits/stdc++.h> //Uncomment while submitting
#include <iostream>
#include <deque>
#include <algorithm>
#include<numeric>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl;

const ll INF=1e9+5;


void solve() {
    // Your code here
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    deque<ll>closest(n,INF);
    ll close=-INF;
    for(ll i=0;i<n;i++){
        if(s[i]=='1'){
            close=i;
        }
        if (close != -INF) closest[i]=min(closest[i],i-close);
    }
    close=-INF;
    for(ll i=n-1;i>=0;i--){
        if(s[i]=='1'){
            close=i;
        }
        if (close != -INF) closest[i]=min(closest[i],close-i);
    }

    deque<ll>dp(n*2+2,0);
    for(ll i=n-1;i>=0;i--){
        dp[i]=max(dp[i],dp[i+1]);
        if(closest[i]>k){
            dp[i]=max(dp[i],dp[i+k+1]+1);
        }
    }
    // cout<<"ANS: ";
    cout<<dp[0]<<endl;

}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll tt;
    // tt=1;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}