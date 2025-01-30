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
    ll n,m;
    cin>>n>>m;
    deque<ll>v;
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){
            ll a=abs(1-i)+abs(1-j);
            ll b=abs(1-i)+abs(m-j);
            ll c=abs(n-i)+abs(1-j);
            ll d=abs(n-i)+abs(m-j);
            ll x=max(a,max(b,max(c,d)));
                v.push_back(x);
        }
    }
    sort(v.begin(),v.end());
    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;
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