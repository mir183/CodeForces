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
    for(ll i=2;i*i*i<n;i++){
        if(n%i==0){
            ll m=n/i;
            for(ll j=i+1;j*j<m;j++){
            if(m%j==0){
                yes;
                cout<<i<<" "<<j<<" "<<m/j<<endl;
                return;
            }
        }
        }
        
    }
    no;
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