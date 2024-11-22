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
    string a,b;
    cin>>a>>b;
    deque<ll>ans;
    for(ll i=0;i<n;i++){
        if(a[i]!=b[i]){
            ans.push_back(i+1);
            ans.push_back(1);
            ans.push_back(i+1);

        }
    }
    ll ns=ans.size();
    cout<<ns<<" ";
    for(auto i:ans){
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