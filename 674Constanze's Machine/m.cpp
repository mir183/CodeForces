//#include<bits/stdc++.h> //Uncomment while submitting
#include <iostream>
#include <deque>
#include <algorithm>
#include<string>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl;
const ll mod=1e9+7;
void solve() {
    // Your code here
    deque<ll>dp(1e5+5);
    dp[0]=1,dp[1]=1;
    string s;
    cin>>s;
    if(s.find("m")!=string::npos or s.find("w")!=string::npos){
        cout<<0<<endl;
        return;
    }
    // for(ll i=0;i<s.size();i++){
    //     if(s[i]=='m' or s[i]=='w'){
    //         cout<<0<<endl;
    //         return;
    //     }
    // }
    for(ll i=2;i<=s.size();i++){
        if(s.substr(i-2,2)=="nn" or s.substr(i-2,2)=="uu"){
            dp[i]=(dp[i-2]+dp[i-1])%mod;
        }else{
            dp[i]=dp[i-1];
        }
    }
    cout<<dp[s.size()]<<endl;
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