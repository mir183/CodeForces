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
    ll n;
    cin>>n;
    deque<ll>v(n);
    ll ans=0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        ans=gcd(ans,v[i]);
    }
    // ll ans=gcd(v[0],v[1]);
    // for(ll i=2;i<n;i++){
    //     ans=gcd(ans,v[i]);
    // }
    ll val=0;
    ll i;
    for(i=1;i*i<ans;i++){
        if(ans%i==0){
            val+=2;
        }
    }
    if(i*i==ans)val++;
    cout<<val<<endl;
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