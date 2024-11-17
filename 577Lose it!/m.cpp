#include<bits/stdc++.h> //Uncomment while submitting
#include <iostream>
#include <deque>
#include<unordered_map>
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
    ll n;
    cin>>n;
    unordered_map<ll,ll> m;
    m[4]=0;
    m[8]=1;
    m[15]=2;
    m[16]=3;
    m[23]=4;
    m[42]=5;
    deque<ll>v(6,0);
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        ll y=m[x];
        if(y==0){
            v[y]++;
        }
        else if(v[y-1]>0){
            v[y]++;
            v[y-1]--;
        }
    }
    cout<<n-6*v[5]<<endl;
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