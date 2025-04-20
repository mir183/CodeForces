#include<bits/stdc++.h> //Uncomment while submitting
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
    ll n;
    cin>>n;
    deque<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    ll sum=v.back();
    deque<ll>neg(n);
    neg.front()=0;
    for(ll i=1;i<n;i++){
        neg[i]=neg[i-1]+i*(v[i]-v[i-1]);
        sum-=neg[i];
    }
    cout<<sum<<endl;
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