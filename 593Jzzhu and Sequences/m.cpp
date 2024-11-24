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
const ll MOD=1e9+7;
void solve() {
    // Your code here
    ll x,y,n;
    cin>>x>>y>>n;
    deque<ll>v={x,y,y-x,-x,-y,x-y};
    ll r = ((v[(n - 1) % 6] % MOD) + MOD) % MOD;
    cout<<r<<endl;
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