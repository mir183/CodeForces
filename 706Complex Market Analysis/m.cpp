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


bool ok(int n){
    if(n==1)return false;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}

void solve() {
    // Your code here
    ll n,k;
    cin>>n>>k;
    deque<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    ll ans=0;
    for(ll i=0;i<n;i++){
        if(ok(v[i])){
            ll l=1,r=1;
            while(i+r*k<n and v[i+r*k]==1) r++;
            while(i-l*k>=0 and v[i-l*k]==1)l++;
            l--,r--;
            ans+=l+r+l*r;
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