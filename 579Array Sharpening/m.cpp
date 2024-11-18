#include<bits/stdc++.h> //Uncomment while submitting
#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "Yes" << endl
#define no cout << "No" << endl;

void solve() {
    // Your code here
    ll n;
    cin>>n;
    deque<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    if(n==1){
        yes;
        return;
    }
    ll i,j;
    for(i=0;i<n;i++){
        if(v[i]<i)break;
    }
    for(j=n-1;j>=0;j--){
        if(v[j]<n-j-1)break;
    }
    if(i-j<2){
        // cout<<"ANS: "<<endl;
        // cout<<i<<" "<<j<<endl;
        // cout<<i-j<<endl;
        no
    }else{
        yes;
    }

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