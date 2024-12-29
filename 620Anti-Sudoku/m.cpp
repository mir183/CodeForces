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
    ll n=9;
    deque<deque<char>>dp(n,deque<char>(n));
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            cin>>dp[i][j];
        }
    }
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            if(dp[i][j]=='1')dp[i][j]='2';
        }
    }
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            cout<<dp[i][j];
        }
        cout<<endl;
    }

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