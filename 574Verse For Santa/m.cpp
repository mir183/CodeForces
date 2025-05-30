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
    for(ll i=0;i<n;i++) cin>>v[i];
    ll in=0;
    for(ll i=0;i<n;i++) {
        if(v[i]>v[in]){
            in=i;
        }
        k-=v[i];
        if(k<0) {
            break;
        }
    }
    if(k>=0)in=-1;
    cout<<in+1<<endl;
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