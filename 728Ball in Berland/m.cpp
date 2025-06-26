//#include<bits/stdc++.h> //Uncomment while submitting
#include <iostream>
#include <deque>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl;

void solve() {
    // Your code here
    ll a,b,k;
    cin>>a>>b>>k;
    map<ll,ll>m,n;
    ll z=0;
    for(ll i=0;i<k;i++){
        ll x;
        cin>>x;
        z+=m[x]++;
    }
    for(ll i=0;i<k;i++){
        ll x;
        cin>>x;
        z+=n[x]++;
    }
    cout<<(k*(k-1)/2)-z<<endl;
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