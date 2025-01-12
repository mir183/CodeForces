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
    deque<ll>pos,neg;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        if(x>=0) pos.push_back(x);
        else neg.push_back(-x);
    }
    ll ans=0;
    sort(pos.rbegin(),pos.rend());
    sort(neg.rbegin(),neg.rend());
    if(neg.size()==0){
        if(pos.size()!=0){
            for(ll i=0;i<pos.size();i+=k){
                ans+=2*pos[i];
            }
            ans-=pos[0];
        }
        cout<<ans<<endl;
    }else if(pos.size()==0){
        if(neg.size()!=0){
            for(ll i=0;i<neg.size();i+=k){
                ans+=2*neg[i];
            }
            ans-=neg[0];
        }
        cout<<ans<<endl;
    }else{
        for(ll i=0;i<pos.size();i+=k){
            ans+=2*pos[i];
        }
        for(ll i=0;i<neg.size();i+=k){
            ans+=2*neg[i];
        }
        ans-=max(pos[0],neg[0]);
        cout<<ans<<endl;
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