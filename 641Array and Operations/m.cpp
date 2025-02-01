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
    ll n,k;
    cin>>n>>k;
    deque<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    // ll L=0,R=n-1;
    ll ans=0;
    // while(k--){
    //     // if(L>=R){
    //     //     return;
    //     // }
    //     ll x=v[L];
    //     ll y=v[R];
    //     L++,R--;
    //     // v.erase(v.begin()+L);
    //     // v.erase(v.begin()+R);
    //     // /
    //     // R=v.size()-1;

    //     ll z=x/y;
    //     ans+=z;

    // }
    // for(ll i=L;i<=R;i++){
    //     ans+=v[i];
    // }
    for(ll i=0;i<n-2*k;i++)ans+=v[i];
    for(ll i=n-2*k;i<n-k;i++){
        ans+=v[i]/v[i+k];
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