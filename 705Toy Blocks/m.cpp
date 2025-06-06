//#include<bits/stdc++.h> //Uncomment while submitting
#include <iostream>
#include <deque>
#include <algorithm>
#include<numeric>
#include<cmath>
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
    ll total=accumulate(v.begin(),v.end(),0LL);
    ll need=max(total,*max_element(v.begin(),v.end())*(n-1));
    need = (need + (n - 2)) / (n - 1) * (n - 1);
    
    cout<<need-total<<endl;



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