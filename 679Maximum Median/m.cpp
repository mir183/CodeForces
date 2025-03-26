//#include<bits/stdc++.h> //Uncomment while submitting
#include <iostream>
#include <deque>
#include <algorithm>
#include<climits>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl;

bool can(deque<ll>&v, ll mid, ll k){
    ll n=v.size();
    ll need=0;
    for(ll i=n/2;i<n;i++){
        if(mid>v[i]){
            need+=abs(mid-v[i]);
        }
        if(need>k) return false;
    }
    if(need<=k) return true;
    else return false;

}

void solve() {
    // Your code here
    ll n,k;
    cin>>n>>k;

    deque<ll>v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    ll mid=v[n/2];
    ll l=1,r=LLONG_MAX, ans=0 ;
    while(l<=r){
        mid=(l+r)/2;
        if(can(v,mid,k)){
            l=mid+1;
            ans=mid;
        }
        else r=mid-1;
    }
    cout<<ans<<endl;
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