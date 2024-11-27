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
    ll n,m;
    cin>>n>>m;
    deque<ll>k(n),c(m);
    for(ll i=0;i<n;i++) cin>>k[i];
    for(ll i=0;i<m;i++) cin>>c[i];
    sort(k.begin(),k.end(),greater<ll>());
    ll total=0;
    ll j=0;
    for(ll i=0;i<n;i++){
        if(j<m){
            if(c[j]<c[k[i]-1]){
                total+=c[j];
                j++;
            }
            else{
                total+=c[k[i]-1];
            }
        }else{
            total+=c[k[i]-1];
        }
    }
    cout<<total<<endl;
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