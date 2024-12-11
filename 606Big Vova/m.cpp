//#include<bits/stdc++.h> //Uncomment while submitting
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

void solve() {
    // Your code here
    ll n;cin>>n;
    deque<ll>v(n);
    ll mi=0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        mi=(v[i]>v[mi]?i:mi);
    }
    deque<ll>ans;
    ans.push_back(v[mi]);
    v[mi]=0;
    // ans.push_back(*max_element(v.begin(),v.end()));
    ll cf=ans[0];
    for(ll i=1;i<n;i++){
        ll ci=0,cans=0;
        for(ll j=0;j<n;j++){
            if(v[j] and gcd(v[j],cf)>cans){
                cans=gcd(v[j],cf);
                ci=j;
            }
            
        }
        ans.push_back(v[ci]);
        cf=cans;
        v[ci]=0;
    }
    for(ll i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }cout<<endl;
    
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