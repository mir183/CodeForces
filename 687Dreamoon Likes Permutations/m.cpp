//#include<bits/stdc++.h> //Uncomment while submitting
#include <iostream>
#include <deque>
#include <algorithm>
#include<set>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl;

void solve() {
    // Your code here
    ll n;
    cin>>n;
    deque<ll>v(n);
    for(auto& i:v)cin>>i;
    deque<bool>pre(n+1,false),suf(n+1,false);
    set<ll>seen;
    ll mx=-1;
    for(ll i=0;i<n;i++){
        seen.insert(v[i]);
        mx=max(mx,v[i]);
        if(seen.size()==i+1 and mx==i+1){
            pre[i+1]=true;
        }
    }
    seen.clear();
    mx=-1;
    for(ll i=n-1;i>=0;i--){
        seen.insert(v[i]);
        mx=max(mx,v[i]);
        if(seen.size()==n-i and mx==n-i){
            suf[i]=true;
        }
    }
    
    deque<pair<ll,ll>>ans;
    for(ll i=1;i<n;i++){
        if(pre[i] and suf[i]){
            ans.push_back({i,n-i});
        }
    }
    cout<<ans.size()<<endl;
    for(auto [x,y]:ans){
        cout<<x<<" "<<y<<endl;
    }

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