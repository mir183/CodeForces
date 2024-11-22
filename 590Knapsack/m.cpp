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
    ll n,k;
    cin>>n>>k;
    deque<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    ll h=(k+1)/2;
    ll sm=0;
    for(ll i=0;i<n;i++){
        if(v[i]>=h and v[i]<=k){
            cout<<1<<endl;
            cout<<i+1<<endl;
            return;
        }
    }
    deque<ll>ans;
    for(ll i=0;i<n;i++){
        if(v[i]<h){
            sm+=v[i];
            ans.push_back(i+1);
            if(sm>=h)break;
        }
    }
    // ll ns=ans.size();
    if(sm>=h){
        cout<<ans.size()<<endl;
        for(auto i:ans){
            cout<<i<<" ";
        }cout<<endl;
    }
    else{
        cout<<-1<<endl;
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