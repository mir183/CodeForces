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
const ll mod=998244353;

void solve() {
    // Your code here
    ll n,k;
    cin>>n>>k;
    deque<ll>v(n+1);
    for(ll i=1;i<=n;i++){
        cin>>v[i];
    }
    ll ans=0,way=1;
    deque<ll>idv;
    for(ll i=1;i<=n;i++){
        if(v[i]>=n-k+1){
            ans+=v[i];
            idv.push_back(i);
        }
    }
    for(ll i=1;i<idv.size();i++){
        way=(way*(idv[i]-idv[i-1]))%mod;
    }
    cout<<ans<<" "<<way<<endl;
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