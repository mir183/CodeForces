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
    ll n;
    cin>>n;
    deque<ll>v(n);
    for(ll i=0;i<n;i++) {
        cin>>v[i];
    }
    ll mn=*min_element(v.begin(), v.end());
    ll cnt=0;
    for(auto i:v){
        if(i==mn)cnt++;
        if((mn&i)!=mn){
            cout<<0<<endl;
            return;
        }
    }

    ll fact=1;
    for(ll i=1;i<=n-2;i++){
        fact = fact * i;
        fact = fact % MOD; // To avoid overflow
    }
    ll ans= cnt*(cnt-1)%MOD;
    ans = (ans* fact) % MOD;
    cout<<ans<<endl;
    return;

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