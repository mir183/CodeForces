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
    deque<ll>a(n),red,blue;
    string s;
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>s;
    for(ll i=0;i<n;i++){
        if(s[i]=='R') red.push_back(a[i]);
        else blue.push_back(a[i]);
    }
    sort(red.begin(),red.end(),greater<ll>());
    sort(blue.begin(),blue.end());
    bool ok=true;
    for(ll i=0;i<blue.size();i++){
        if(blue[i]<i+1){
            ok=false;
            // break;
        }
    }
    for(ll i=0;i<red.size();i++){
        if(red[i]>n-i){
            ok=false;
            // break;
        }
    }
    if(ok) yes;
    else no;
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