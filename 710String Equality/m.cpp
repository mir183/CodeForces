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
    ll n,k;
    cin>>n>>k;
    string a,b;
    cin>>a>>b;
    deque<ll>ca(26,0),cb(26,0);
    for(ll i=0;i<n;i++){
        ca[a[i]-'a']++;
        cb[b[i]-'a']++;
    }
    bool ok=false;
    for (ll i = 0; i < 26; i++){
        if((ca[i]<cb[i]) or (ca[i]-=cb[i])%k!=0){
            ok=true;
            break;
        }
        if(i<25){
            ca[i+1]+=ca[i];
        }
    }
    if(ok){
        no
    }else yes;
    
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