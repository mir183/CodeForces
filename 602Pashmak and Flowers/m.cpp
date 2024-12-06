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
    ll n;
    cin>>n;
    deque<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    ll mn=*min_element(v.begin(),v.end());
    ll mx=*max_element(v.begin(),v.end());
    ll t1=count(v.begin(),v.end(),mx);
    ll t2=count(v.begin(),v.end(),mn);
    cout<<mx-mn<<" ";
    if(mx==mn){
        cout<<n*(n-1)/2<<endl;
    }else{
        cout<<t1*t2<<endl;
    }
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