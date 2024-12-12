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
    ll n,x,m;
    cin>>n>>x>>m;
    ll XL=x,XR=x;
    while(m--){
        ll l,r;
        cin>>l>>r;
        if(max(l,XL)<=min(r,XR)){
            XL = min(l, XL);
            XR = max(r, XR);
        }
    }
    cout<<XR-XL+1<<endl;
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